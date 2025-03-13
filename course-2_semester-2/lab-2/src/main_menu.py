import flet as ft
from sorse.book import Book
from sorse.get_books import get_books
from components.list_of_books import list_of_books
from components.pagination import pagination
from sorse.book_page import BookPage


def main_menu(page: ft.Page, file_path: str):
    if file_path == '':
        return ft.Container(
            content=ft.Text('Добавьте файл', size=24, color='#FDD3E8'),
            alignment=ft.alignment.center,
            width=page.width
        )
    books: [Book] = get_books(file_path)
    book_page: BookPage = BookPage()
    out_books = ft.Column(
        controls=[
            list_of_books(page, books, book_page)
        ]
    )

    def update_output_book():
        out_books.controls.clear()
        out_books.controls.append(list_of_books(page, books, book_page))
        page.update()
    books_container = ft.Column(
        controls=[
            out_books,
            pagination(page, len(books), book_page, update_output_book)
        ],
        horizontal_alignment=ft.CrossAxisAlignment.CENTER,
        alignment=ft.MainAxisAlignment.CENTER,
        scroll=ft.ScrollMode.AUTO,
    )
    return ft.Container(
        content=books_container,
        alignment=ft.alignment.center,
        padding=20,
        border_radius=10,
        margin=10,
        width=page.width,
    )
