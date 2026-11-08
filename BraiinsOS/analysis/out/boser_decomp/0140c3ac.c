// FUN_0140c3ac @ 0140c3ac size=1108 calls_out=0 calls_in=2
// strings: Bad Request | Switching Protocols | Processing | Internal Server Error | Continuex-euc-jpS | Range Not Satisfiable

longlong FUN_0140c3ac(uint param_1)

{
  char *pcVar1;
  
  param_1 = param_1 & 0xffff;
  if (399 < param_1) {
    switch(param_1) {
    case 400:
      return 0xb00477231;
    case 0x191:
      return 0xc0047723c;
    case 0x192:
      return 0x100056aa28;
    case 0x193:
      return 0x900477248;
    case 0x194:
      return 0x900477251;
    case 0x195:
      return 0x120047725a;
    case 0x196:
      return 0xe0047726c;
    case 0x197:
      return 0x1d0047727a;
    case 0x198:
      return 0xf00477297;
    case 0x199:
      return 0x800570a78;
    case 0x19a:
      return 0x40056f7ec;
    case 0x19b:
      return 0xf004772a6;
    case 0x19c:
      return 0x13004772b5;
    case 0x19d:
      return 0x11004772c8;
    case 0x19e:
      return 0xc004772d9;
    case 0x19f:
      return 0x16004772e5;
    case 0x1a0:
      return 0x15004772fb;
    case 0x1a1:
      return 0x1200477310;
    case 0x1a2:
      return 0xc00477322;
    case 0x1a3:
    case 0x1a4:
    case 0x1a9:
    case 0x1ab:
    case 0x1ae:
    case 0x1b0:
    case 0x1b1:
    case 0x1b2:
    case 0x1b3:
    case 0x1b4:
    case 0x1b5:
    case 0x1b6:
    case 0x1b7:
    case 0x1b8:
    case 0x1b9:
    case 0x1ba:
    case 0x1bb:
    case 0x1bc:
    case 0x1bd:
    case 0x1be:
    case 0x1bf:
    case 0x1c0:
    case 0x1c1:
    case 0x1c2:
      goto switchD_0140c3d0_caseD_1a3;
    case 0x1a5:
      return 0x130047732e;
    case 0x1a6:
      return 0x1400477341;
    case 0x1a7:
      return 0x600477355;
    case 0x1a8:
      return 0x110047735b;
    case 0x1aa:
      return 0x10005695d8;
    case 0x1ac:
      return 0x150047736c;
    case 0x1ad:
      return 0x1100477381;
    case 0x1af:
      pcVar1 = "Request Header Fields Too Large";
LAB_0140c7a4:
      return CONCAT44(0x1f,pcVar1);
    case 0x1c3:
      return 0x1d004773b1;
    default:
      param_1 = param_1 - 500;
      switch(param_1) {
      case 0:
        return 0x15004773ce;
      case 1:
        return 0xf004773e3;
      case 2:
        return 0xb004773f2;
      case 3:
        return 0x13004773fd;
      case 4:
        return 0xf00477410;
      case 5:
        return 0x1a0047741f;
      case 6:
        return 0x1700477439;
      case 7:
        return 0x1400477450;
      case 8:
        return 0xd00477464;
      case 9:
        goto switchD_0140c3d0_caseD_1a3;
      case 10:
        return 0xc00477471;
      case 0xb:
        pcVar1 = "Network Authentication Required";
        goto LAB_0140c7a4;
      default:
        return (ulonglong)param_1 << 0x20;
      }
    }
  }
  if (param_1 < 200) {
    if (param_1 == 100) {
      return 0x800570ac8;
    }
    if (param_1 == 0x65) {
      return 0x130047715d;
    }
    if (param_1 == 0x66) {
      return 0xa00477170;
    }
  }
  else {
    switch(param_1) {
    case 200:
      return 0x20047717a;
    case 0xc9:
      return 0x70047717c;
    case 0xca:
      return 0x8005706e0;
    case 0xcb:
      return 0x1d00477183;
    case 0xcc:
      return 0xa004771a0;
    case 0xcd:
      return 0xd004771aa;
    case 0xce:
      return 0xf004771b7;
    case 0xcf:
      return 0xc004771c6;
    case 0xd0:
      return 0x1000568888;
    }
    switch(param_1) {
    case 300:
      return 0x1000567ae8;
    case 0x12d:
      return 0x11004771d9;
    case 0x12e:
      return 0x5004771ea;
    case 0x12f:
      return 0x9004771ef;
    case 0x130:
      return 0xc004771f8;
    case 0x131:
      return 0x900477204;
    case 0x132:
      break;
    case 0x133:
      return 0x120047720d;
    case 0x134:
      return 0x120047721f;
    default:
      if (param_1 == 0xe2) {
        return 0x7004771d2;
      }
    }
  }
switchD_0140c3d0_caseD_1a3:
  return (ulonglong)param_1 << 0x20;
}

