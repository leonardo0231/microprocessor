# Simple Melody Player with Arduino
این پروژه یک پخش‌کننده ساده آهنگ است که با استفاده از آردوینو و بیزر (Buzzer) یک ملودی را اجرا می‌کند. با استفاده از تابع tone() آردوینو، این پروژه ملودی را با فرکانس‌های مختلف پخش کرده و مدت زمان هر نت را با توجه به آرایه‌ای از مقادیر noteDurations تنظیم می‌کند.

## ویژگی‌ها
- پخش ملودی ساده با استفاده از بیزر (Buzzer).
- توانایی تنظیم مدت زمان هر نت از طریق آرایه noteDurations.
- ملودی از نت‌های موسیقی استاندارد استفاده می‌کند (با استفاده از کتابخانه pitches.h).

## قطعات مورد نیاز
1. آردوینو 
2. بیزر (Buzzer).
3. مقاومت محدودکننده جریان 
4. سیم‌های اتصال.

## نحوه اتصال
1. Buzzer:
- پایه مثبت بیزر به پین دیجیتال 8 آردوینو.
- پایه منفی بیزر به GND آردوینو از طریق یک مقاومت 330 اهمی.

## نحوه عملکرد
1. این پروژه از کتابخانه pitches.h برای تبدیل نت‌های موسیقی به فرکانس‌های معین استفاده می‌کند.
2. در هر تکرار حلقه for در بخش setup()، یک نت موسیقی بر اساس آرایه melody[] پخش می‌شود.
3. مدت زمان پخش هر نت بر اساس مقادیر موجود در آرایه noteDurations[] تنظیم می‌شود.
4. بیزر از طریق پین 8 آردوینو برای پخش صدا استفاده می‌شود.
5. پس از پایان هر نت، یک تأخیر کوتاه (30 میلی‌ثانیه) برای ایجاد فاصله بین نت‌ها در نظر گرفته شده است.
