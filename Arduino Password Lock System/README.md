# سیستم رمز عبور با استفاده از کیپد و آردوینو

این پروژه برای ایجاد یک سیستم امنیتی ساده با استفاده از آردوینو و کیپد طراحی شده است. در این سیستم، کاربر می‌تواند یک رمز عبور برای امنیت تنظیم کند و سپس برای دسترسی به سیستم، رمز عبور را وارد کند. اگر رمز عبور درست وارد شود، یک LED روشن خواهد شد، در غیر این صورت، LED خاموش خواهد ماند.



## ویژگی‌ها
- استفاده از کیپد 4x4 برای ورودی رمز عبور.
- ذخیره رمز عبور در حافظه موقت برای استفاده در سیستم.
- مقایسه رمز عبور وارد شده با رمز عبور تنظیم شده.
- استفاده از LED به عنوان نشانگر وضعیت (در صورت درست بودن رمز، LED روشن می‌شود).
- قابلیت تنظیم رمز عبور جدید.

## قطعات مورد نیاز
1. آردوینو
2. کیپد 4x4 (برای وارد کردن رمز عبور).
3. LED (برای نشان دادن وضعیت رمز عبور).
4. مقاومت (برای محافظت از LED).
4. سیم‌های اتصال.

## نحوه اتصال
1. کیپد 4x4:
- پین‌های ردیف و ستون کیپد به پین‌های دیجیتال آردوینو متصل می‌شوند. در این کد، ردیف‌ها به پین‌های 9، 8، 7 و 6 و ستون‌ها به پین‌های 5، 4، 3 و 2 متصل شده‌اند.
2. LED:
- پین مثبت LED به پین 12 آردوینو متصل می‌شود و پایه منفی به زمین (GND) متصل می‌شود.

## نحوه عملکرد
1. ابتدا سیستم از کاربر درخواست می‌کند که یک رمز عبور جدید وارد کند.
2. پس از وارد کردن چهار رقم رمز عبور، رمز ذخیره می‌شود و سیستم از کاربر می‌خواهد که دوباره رمز عبور را وارد کند.
3. در صورتی که رمز وارد شده صحیح باشد، LED روشن می‌شود و پیام "Correct password!" در کنسول سریال نمایش داده می‌شود.
4. در صورت وارد کردن رمز عبور اشتباه، LED خاموش می‌شود و پیام "Wrong password!" در کنسول سریال نمایش داده می‌شود.