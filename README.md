<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">&nbsp;Definitions</span></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">What is printf?</span></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">The printf function (which derives its name from &quot;print formatted&quot;) prints a message on the screen using a &quot;format string&quot; that includes the instructions to mix multiple strings into the final string to display on the screen.</span></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">It is a special function because it receives a variable number of parameters. The first parameter is fixed and is the format string. It includes text to be printed literally and&nbsp;</span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:italic;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">marks</span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">&nbsp;to be replaced by text obtained from the additional parameters. Therefore, printf is called with as many parameters as there are marks in the format string plus one (the format string itself). The following example shows how the value of thevariable is printed counter.</span></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Naturally special characters</span></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">There are certain types of characters that are usually used to define certain functionalities (\ &quot;&quot; &apos;&apos;%) that the program must understand, for example:</span></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">BACKSLASH</span></p>
<p dir="ltr" style="line-height:1.2;text-align: justify;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">\ is&nbsp;</span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;"><span class="Apple-tab-span" style="white-space:pre;">&nbsp; &nbsp;&nbsp;</span></span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">used for two things; one to recognize that if there is another special character &nbsp; &nbsp;</span></p>
<p dir="ltr" style="line-height:1.2;margin-left: 36pt;text-align: justify;margin-top:0pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">followed by this one, it will not take it as a special character but as any other character and the second to identify if it is an alternatively special character.</span></p>
<p dir="ltr" style="line-height:1.2;text-align: justify;margin-top:0pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">DOUBLE QUOTES</span></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">&quot;&quot;</span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;"><span class="Apple-tab-span" style="white-space:pre;">&nbsp; &nbsp;&nbsp;</span></span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">serves to identify that it is a string of characters or a String</span></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">SINGLE QUOTES</span></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">&apos;&apos;</span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;"><span class="Apple-tab-span" style="white-space:pre;">&nbsp; &nbsp;&nbsp;</span></span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">serves to identify if it is a character according to the ASCII code</span></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">PERCENTAGE</span></p>
<p dir="ltr" style="line-height:1.2;text-align: justify;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">%</span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;"><span class="Apple-tab-span" style="white-space:pre;">&nbsp; &nbsp;&nbsp;</span></span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">It is a type of format used to specify the type of arguments to&nbsp;</span></p>
<p dir="ltr" style="line-height:1.2;text-indent: 36pt;text-align: justify;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">be to place or replace within your statement.</span></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Alternately special characters</span></p>
<p><br></p>
<div align="left" dir="ltr" style="margin-left:0pt;">
    <table style="border:none;border-collapse:collapse;">
        <tbody>
            <tr style="height:52.5pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">\ a</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Alert</span></p>
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(audible alert)</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Produces an alert to the user by means of a visible sound or warning.</span></p>
                </td>
            </tr>
            <tr style="height:69.35595703125pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">\ b</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Backspace</span></p>
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(recoil)</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Move cursor one column to the left, except that the current position is the first.</span></p>
                </td>
            </tr>
            <tr style="height:49.5pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">\ f</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Form feed</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Moves the cursor to the beginning of the next logical page.</span></p>
                </td>
            </tr>
            <tr style="height:48.2373046875pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">\ n</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Newline</span></p>
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(new line)</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Moves the cursor to the beginning of the next line.</span></p>
                </td>
            </tr>
            <tr style="height:53.25pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">\ r</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Carriage - return</span></p>
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(Carriage Return)</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Move the cursor to the beginning of the current line</span></p>
                </td>
            </tr>
            <tr style="height:81.75pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">\ t</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Tab</span></p>
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(Tab)</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Move the cursor to the next tab on the current line. If there are no more tabs on the current line, the behavior is undefined.</span></p>
                </td>
            </tr>
            <tr style="height:85.5pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">\ v</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Vertical - tab</span></p>
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(Vertical tab)</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Move the cursor to the beginning of the next vertical tab. If there are no more tabs on the current page the behavior is undefined.</span></p>
                </td>
            </tr>
        </tbody>
    </table>
</div>
<p><br></p>
<p><br></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Format specifications</span></p>
<p><br></p>
<div align="left" dir="ltr" style="margin-left:1.5pt;">
    <table style="border:none;border-collapse:collapse;">
        <tbody>
            <tr style="height:27.11865234375pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% c</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Print a character in ASCII format.</span></p>
                </td>
            </tr>
            <tr style="height:34.5pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% d</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">A base 10 decimal number.</span></p>
                </td>
            </tr>
            <tr style="height:39pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% e</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">An exponential floating point number.</span></p>
                </td>
            </tr>
            <tr style="height:30.75pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% f</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">A floating point number.</span></p>
                </td>
            </tr>
            <tr style="height:35.25pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% g</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">A floating point number in general format.</span></p>
                </td>
            </tr>
            <tr style="height:30.86865234375pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% i</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">An integer in base 10.</span></p>
                </td>
            </tr>
            <tr style="height:33.11865234375pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% o</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">A number in octal.</span></p>
                </td>
            </tr>
            <tr style="height:33.75pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% s</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">A string of characters.</span></p>
                </td>
            </tr>
            <tr style="height:34.5pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% u</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">An unassigned decimal number (base 10).</span></p>
                </td>
            </tr>
            <tr style="height:36.75pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% x</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">A lowercase hexadecimal (base 10) number.</span></p>
                </td>
            </tr>
            <tr style="height:25pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% X</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">&nbsp;An uppercase hexadecimal (base 10) number.</span></p>
                </td>
            </tr>
            <tr style="height:35.25pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">%</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 4pt 5pt 4pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: center;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">A percent sign (\%%also works</span></p>
                </td>
            </tr>
        </tbody>
    </table>
</div>
<p dir="ltr" style="line-height:1.38;text-indent: 36pt;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">p</span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;"><span class="Apple-tab-span" style="white-space:pre;">&nbsp; &nbsp;&nbsp;</span></span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;"><span class="Apple-tab-span" style="white-space:pre;">&nbsp; &nbsp;&nbsp;</span></span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">A pointer is printed as a hexadecimal integer</span></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">The flags field can be 0 or + in any order according to the following table.</span></p>
<p><br></p>
<div align="left" dir="ltr" style="margin-left:0pt;">
    <table style="border:none;border-collapse:collapse;">
        <tbody>
            <tr style="height:54.35595703125pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(-)</span></p>
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">minus</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Left align the output of this marker position. (the default is align right).</span></p>
                </td>
            </tr>
            <tr style="height:48.9873046875pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(+)</span></p>
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Mas</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Prepend a plus sign for numeric types withpositive sign.</span></p>
                </td>
            </tr>
            <tr style="height:53.4873046875pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">&nbsp;</span></p>
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Space</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Precedes a space for positive signed numeric types.</span></p>
                </td>
            </tr>
            <tr style="height:49.75pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">0</span></p>
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Zero</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">When the &quot;width&quot; option is specified, prepend zeros for the numeric type.</span></p>
                </td>
            </tr>
            <tr style="height:51.25pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:13.5pt;font-family:'Courier New';color:#473428;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">&apos;</span></p>
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Apostrophe</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">The whole number or exponent of a decimal has the thousands grouping separator applied.</span></p>
                </td>
            </tr>
            <tr style="height:51.25pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:13.5pt;font-family:'Courier New';color:#473428;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">#</span></p>
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:13.5pt;font-family:'Courier New';color:#473428;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Numeral</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">https://www.lix.polytechnique.fr/~liberti/public/computing/prog/c/C/FUNCTIONS/format.html</span></p>
                </td>
            </tr>
        </tbody>
    </table>
</div>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">length modifiers</span></p>
<p><br></p>
<div align="left" dir="ltr" style="margin-left:0pt;">
    <table style="border:none;border-collapse:collapse;">
        <tbody>
            <tr style="height:51.25pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">*</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Suppress the assignment of this conversion, the conversion is performed but its result is discarded.</span></p>
                </td>
            </tr>
            <tr style="height:78.25pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">h</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Indicates that the next conversion is a ny and that the next pointer points to a short int (not an int). It is therefore the conversion of a single precision numerical value</span></p>
                </td>
            </tr>
            <tr style="height:105.25pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">l</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Indicates that the next conversion is dioux or n and that the next pointer points to a long int, or that the conversion will be ef or g and the next pointer is a double (not a float). This denotes the conversion of a double precision numeric value</span></p>
                </td>
            </tr>
            <tr style="height:78.25pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">q</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Indicates that the next conversion is dioux or n and that the next pointer points to a quad_t (not an int). It is, therefore, the conversion of a quadruple precision numeric value.</span></p>
                </td>
            </tr>
            <tr style="height:51.25pt;">
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">L</span></p>
                </td>
                <td style="border-left:solid #000000 0.99609pt;border-right:solid #000000 0.99609pt;border-bottom:solid #000000 0.99609pt;border-top:solid #000000 0.99609pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Indicates that the conversion will be ef or g and that the next pointer is a long double. It is a quadruple precision conversion.</span></p>
                </td>
            </tr>
        </tbody>
    </table>
</div>
<p><br></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">How does printf work?</span></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;"><span style="border:none;display:inline-block;overflow:hidden;width:424px;height:65px;"><img src="https://lh5.googleusercontent.com/_31Y13meLx8AlheLeAxfGTw9huCS3QfLlLfDA_vBQsSlYdECOnKSPXrQlu-JCGmowIzEbyQ9OL4DsjbA8v5IV21R2FytxshKdRjr_UmuHcsFAuIhDB3oXbUPUlOFZxLwosd-IFQD" width="424" height="65"></span></span></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;background-color:#ffffff;margin-top:0pt;margin-bottom:0pt;padding:0pt 0pt 12pt 0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">The symbol &quot;%&quot; denotes the beginning of the format mark. The &quot;mark% d&quot;is replaced by the value of thevariable counter and the resulting string is printed. The symbol &quot;\ n&quot; represents a line break. The output, by default, is justified to the right of the total width that we find given to the field, which by default has the length of the string as its length.</span></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;background-color:#ffffff;margin-top:0pt;margin-bottom:0pt;padding:0pt 0pt 12pt 0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If multiple flags appear in the format string, the values to be included are taken in the same order in which they appear. The following figure shows an example where the format string has three, % s, % d, and flags% 5.2f, which are processed using the string &quot;red&quot;, the integerrespectively 1234567, and the real number 3.14,. (</span><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">&quot;</span><span style="font-size:11pt;font-family:Roboto,sans-serif;color:#000000;background-color:transparent;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">My first fully recursive printf</span><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">&quot; (Emmanuel Gaviria, 2021)</span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">)</span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;"><span style="border:none;display:inline-block;overflow:hidden;width:579px;height:135px;"><img src="https://lh5.googleusercontent.com/5dBdiCXWWHtghsNBXY398Q7iA4bswOik7R3Ewgd23x2vPGrBPy2p8NA44PZkC48_Af9ZNuNrGpyNA2dOrVCO1QghE5kDP5MxM_d6ZJESjPLv7bIoy5wXGL8-TzffWkWfkWb8NhAD" width="579" height="135"></span></span></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Image taken from &quot;</span><span style="font-size:11pt;font-family:Roboto,sans-serif;color:#000000;background-color:transparent;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">My first fully recursive printf</span><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">&quot; (Emmanuel Gaviria, 2021)</span></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;text-align: justify;margin-top:12pt;margin-bottom:12pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">It is not verified that the number of marks in the format string and the number of remaining parameters be consistent. On error, the behavior of printf is indeterminate.</span></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Strategies</span></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Use the stdarg.h library to have a function with variable parameters</span></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">create functions that tell me the type of special character</span></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">After reading in detail the blog &quot;</span><span style="font-size:11pt;font-family:Roboto,sans-serif;color:#000000;background-color:transparent;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">My first fully recursive printf</span><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">&quot; (Emmanuel Gaviria, 2021) one of the simplest ways to develop the printf function is by means of a &nbsp;case switch that identifies the special characters and the type of parameter to print them</span></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create two structures with typedef struct that identifies me when it is a special character and another that identifies the type of data that is entered by parameter and call a function that prints them for me.</span></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Simply create functions that will print them to me according to established conditionals.</span></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Printf requirements</span></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Next, we have the preliminary requirements that are necessary to perform most of the functionalities that the printf function offers us, with a brief description without going into much detail.&nbsp;</span></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">&nbsp;</span></p>
<div align="left" dir="ltr" style="margin-left:-40.5pt;">
    <table style="border:none;border-collapse:collapse;">
        <tbody>
            <tr style="height:18.64892578125pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;"># Req.</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Description</span></p>
                </td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req .1</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create a function called _printf (char * format ...) that enters all kinds of parameters and that has at least one parameter that tells me the types of variables to be entered</span></p>
                </td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req .2</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create a file type .h (header), containing all the prototypes and libraries to use</span></p>
                </td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req .3</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create a function that identifies me if it is a special natural character (\ &quot;&apos;%)</span></p>
                </td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req .4</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create a function that identifies me if it is an alternative character special (\ a \ b \ f \ n \ r \ t \ v)</span></p>
                </td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req .5</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create a function that identifies me if it is a format specification (% c% d% e% f% g% i% or% s% u% x% x %%)</span></p>
                </td>
            </tr>
            <tr style="height:19.39892578125pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req .6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create a function that will check if after a% there are other formatting options or Flags</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% d</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Width Option, Fill the extra space, justify, fill zero, Fun with plus signs and Invisible plus sign</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% s</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Width and Justification</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">% f</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">OptionWidth Option Justification Fun with plus signs and number of signs before and after the comma</span></p>
                </td>
            </tr>
        </tbody>
    </table>
</div>
<p><br></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Requirements _printf</span></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">For this project we are going to use some properties of printf for them, the requirements necessary to develop this project will be broken down and there will be a check to verify if the functionality could be fully performed and a Level of Importance to determine how necessary it is to perform said requirement for the delivery of the workshop</span></p>
<p><br></p>
<p><br></p>
<div align="left" dir="ltr" style="margin-left:-42pt;">
    <table style="border:none;border-collapse:collapse;">
        <tbody>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Code</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Description</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Level of importance</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">check</span></p>
                </td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 1.</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create a function called _printf (char * format ...) that enters all kinds of parameters and that has at least one parameter that indicates the types of variables to be entered</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">10</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 2.</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create a file type .h (header), containing all the prototypes and libraries to use (Structures, if we use)</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">10</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 3.</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Write the Readme.md with the entire job description</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">10</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:38.0478515625pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create a function that identifies me if it is a special natural character (\ &quot;&apos;%) and performs its function</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">5</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.1</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the special character is \ print the following value if it is also a special character&nbsp;</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">2</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:35.84765625pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.1.1</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;text-align: justify;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If not a special character but an alternatively special character.&nbsp;</span><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(\ a \ b \ f \ n \ r \ t \ v)&nbsp;</span><span style="font-size:12pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">invokes its method corresponding to its function</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">2</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.1.2</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the alternately special character is \ n then it will print a newline with the function _putchar</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">10</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.2</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the special character is% must check if it is a special format type</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">10</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.2.1</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the format is type c, invoke the void _putchar (char) function and print the next character of the percentage.</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">10</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.2.2</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the format is type s, check if there are flags</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">and invoke the function void _print_string (char *) that prints each of the characters of the pointer&nbsp;</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">10</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.4.3</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the format is type% invoke the function void _putchar (char *) and prints the character%</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">10</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br><br><br><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.4.4</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the format is type d check for flags</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">and invokes the function void _print_double (int) printing&nbsp;</span><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:#ffffff;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">orn decimal numberbase 10.</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">10</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req4.4.5</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the format is type i invokes the function void_print_int (int) and prints an integer in base 10</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">10</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.4.6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the format is type b</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.4.7</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the format is type u</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.4.8</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the format is type o</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.4.9</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the format is type x</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.4.10</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the format is type X</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.4.11</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the format is type S</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 4.4.12</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the format is type p (Task 6)</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 5</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create a function that identifies me if it is a flag (+ space #) and performs its function (Task 8)</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 5.1</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the flag is type +</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 5.2</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the flag is type space</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 5.3</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the flag is type #</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 5.4</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the flag is type 0&nbsp;</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(Task 12)</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the flag is type -&nbsp;</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(Task 13)</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create a file man_3_printf that has all the instructions for the use of _printf</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">10</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 7</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create a local buffer of 1024 characters to call to write as little as possible. (Task 5)</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 8</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Create a function that verifies me if it is a custom specifier</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 8.1</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the custom specifier is l&nbsp;</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(Task 9)</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 8.2</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the custom specifier is h</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">&nbsp;(Task 9)</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 8.3</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If the specifier custom is r&nbsp;</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(Task 14)</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
            <tr style="height:0pt;">
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">Req 8.4</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">If custom specifier is R&nbsp;</span></p>
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">(Task 15)</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;">
                    <p dir="ltr" style="line-height:1.2;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">6</span></p>
                </td>
                <td style="border-left:solid #000000 1pt;border-right:solid #000000 1pt;border-bottom:solid #000000 1pt;border-top:solid #000000 1pt;vertical-align:top;padding:5pt 5pt 5pt 5pt;overflow:hidden;overflow-wrap:break-word;"><br></td>
            </tr>
        </tbody>
    </table>
</div>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><a href="https://miro.com/app/board/o9J_llW9zhQ=/" style="text-decoration:none;"><span style="font-size:11pt;font-family:Arial;color:#1155cc;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:underline;-webkit-text-decoration-skip:none;text-decoration-skip-ink:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">https://miro.com/app/board/o9J_llW9zhQ=/</span></a></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:700;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">BIBLIOGRAPHY</span></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><a href="https://valgrind.org/docs/manual/quick-start.html#quick-start.intro" style="text-decoration:none;"><span style="font-size:11pt;font-family:Arial;color:#1155cc;background-color:transparent;font-weight:400;font-style:normal;font-variant:normal;text-decoration:underline;-webkit-text-decoration-skip:none;text-decoration-skip-ink:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">https://valgrind.org/docs/manual/quick-start.html#quick-start.intro</span></a></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><a href="https://www.linkedin.com/pulse/mi-primer-printf-totalmente-recursivo-emmanuel-palacio-gaviria/?originalSubdomain=es" style="text-decoration:none;"><span style="font-size:11pt;font-family:Arial;color:#1155cc;background-color:transparent;font-weight:400;font-style:normal;font-variant:normal;text-decoration:underline;-webkit-text-decoration-skip:none;text-decoration-skip-ink:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">https: // www .linkedin.com / pulse / my-first-printf-fully-recursive-emmanuel-palacio-gaviria /? originalSubdomain = en</span></a></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><a href="http://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_es.html" style="text-decoration:none;"><span style="font-size:11pt;font-family:Arial;color:#1155cc;background-color:transparent;font-weight:400;font-style:normal;font-variant:normal;text-decoration:underline;-webkit-text-decoration-skip:none;text-decoration-skip-ink:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">http://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_es.html</span></a></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><a href="http://agora.pucp.edu.pe/inf2170681/3.htm" style="text-decoration:none;"><span style="font-size:11pt;font-family:Arial;color:#1155cc;background-color:transparent;font-weight:400;font-style:normal;font-variant:normal;text-decoration:underline;-webkit-text-decoration-skip:none;text-decoration-skip-ink:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">http: //agora.pucp.edu.pe/inf2170681/3.htm</span></a></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><a href="https://www.youtube.com/watch?v=cCMQL3RJDlw" style="text-decoration:none;"><span style="font-size:11pt;font-family:Arial;color:#1155cc;background-color:transparent;font-weight:400;font-style:normal;font-variant:normal;text-decoration:underline;-webkit-text-decoration-skip:none;text-decoration-skip-ink:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">https://www.youtube.com/watch?v=cCMQL3RJDlw</span></a></p>
<p><br></p>
<p dir="ltr" style="line-height:1.38;margin-top:0pt;margin-bottom:0pt;"><span style="font-size:11pt;font-family:Arial;color:#000000;background-color:transparent;font-weight:400;font-style:normal;font-variant:normal;text-decoration:none;vertical-align:baseline;white-space:pre;white-space:pre-wrap;">https://miro.com/app/board/o9J_llW9zhQ=/</span></p>
