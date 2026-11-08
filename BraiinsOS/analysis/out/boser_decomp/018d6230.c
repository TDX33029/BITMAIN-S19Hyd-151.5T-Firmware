// FUN_018d6230 @ 018d6230 size=2500 calls_out=1 calls_in=3
// strings: CipherSuiteContentType | CipherSuiteContentType

void FUN_018d6230(undefined1 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_018beed0(param_2,2);
  if (((ushort *)uVar4 == (ushort *)0x0) || ((int)((ulonglong)uVar4 >> 0x20) != 2)) {
    uVar2 = 0xb;
    *(char **)(param_1 + 4) = "CipherSuiteContentType";
    *(undefined4 *)(param_1 + 8) = 0xb;
  }
  else {
    uVar1 = *(ushort *)uVar4;
    uVar3 = 0x178;
    uVar1 = uVar1 << 8 | uVar1 >> 8;
    if (uVar1 < 0xc001) {
      switch(uVar1) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
        uVar3 = uVar1;
        break;
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x75:
      case 0x76:
      case 0x7a:
      case 0x7b:
      case 0x7f:
      case 0xc6:
      case 199:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xdd:
      case 0xde:
      case 0xdf:
      case 0xe0:
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xe8:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xed:
      case 0xee:
      case 0xef:
      case 0xf0:
      case 0xf1:
      case 0xf2:
      case 0xf3:
      case 0xf4:
      case 0xf5:
      case 0xf6:
      case 0xf7:
      case 0xf8:
      case 0xf9:
      case 0xfa:
      case 0xfb:
      case 0xfc:
      case 0xfd:
      case 0xfe:
        break;
      case 0x60:
        uVar3 = 0x5d;
        break;
      case 0x61:
        uVar3 = 0x5e;
        break;
      case 0x62:
        uVar3 = 0x5f;
        break;
      case 99:
        uVar3 = 0x60;
        break;
      case 100:
        uVar3 = 0x61;
        break;
      case 0x65:
        uVar3 = 0x62;
        break;
      case 0x66:
        uVar3 = 99;
        break;
      case 0x67:
        uVar3 = 100;
        break;
      case 0x68:
        uVar3 = 0x65;
        break;
      case 0x69:
        uVar3 = 0x66;
        break;
      case 0x6a:
        uVar3 = 0x67;
        break;
      case 0x6b:
        uVar3 = 0x68;
        break;
      case 0x6c:
        uVar3 = 0x69;
        break;
      case 0x6d:
        uVar3 = 0x6a;
        break;
      case 0x72:
        uVar3 = 0x6b;
        break;
      case 0x73:
        uVar3 = 0x6c;
        break;
      case 0x74:
        uVar3 = 0x6d;
        break;
      case 0x77:
        uVar3 = 0x6e;
        break;
      case 0x78:
        uVar3 = 0x6f;
        break;
      case 0x79:
        uVar3 = 0x70;
        break;
      case 0x7c:
        uVar3 = 0x71;
        break;
      case 0x7d:
        uVar3 = 0x72;
        break;
      case 0x7e:
        uVar3 = 0x73;
        break;
      case 0x80:
        uVar3 = 0x74;
        break;
      case 0x81:
        uVar3 = 0x75;
        break;
      case 0x82:
        uVar3 = 0x76;
        break;
      case 0x83:
        uVar3 = 0x77;
        break;
      case 0x84:
        uVar3 = 0x78;
        break;
      case 0x85:
        uVar3 = 0x79;
        break;
      case 0x86:
        uVar3 = 0x7a;
        break;
      case 0x87:
        uVar3 = 0x7b;
        break;
      case 0x88:
        uVar3 = 0x7c;
        break;
      case 0x89:
        uVar3 = 0x7d;
        break;
      case 0x8a:
        uVar3 = 0x7e;
        break;
      case 0x8b:
        uVar3 = 0x7f;
        break;
      case 0x8c:
        uVar3 = 0x80;
        break;
      case 0x8d:
        uVar3 = 0x81;
        break;
      case 0x8e:
        uVar3 = 0x82;
        break;
      case 0x8f:
        uVar3 = 0x83;
        break;
      case 0x90:
        uVar3 = 0x84;
        break;
      case 0x91:
        uVar3 = 0x85;
        break;
      case 0x92:
        uVar3 = 0x86;
        break;
      case 0x93:
        uVar3 = 0x87;
        break;
      case 0x94:
        uVar3 = 0x88;
        break;
      case 0x95:
        uVar3 = 0x89;
        break;
      case 0x96:
        uVar3 = 0x8a;
        break;
      case 0x97:
        uVar3 = 0x8b;
        break;
      case 0x98:
        uVar3 = 0x8c;
        break;
      case 0x99:
        uVar3 = 0x8d;
        break;
      case 0x9a:
        uVar3 = 0x8e;
        break;
      case 0x9b:
        uVar3 = 0x8f;
        break;
      case 0x9c:
        uVar3 = 0x90;
        break;
      case 0x9d:
        uVar3 = 0x91;
        break;
      case 0x9e:
        uVar3 = 0x92;
        break;
      case 0x9f:
        uVar3 = 0x93;
        break;
      case 0xa0:
        uVar3 = 0x94;
        break;
      case 0xa1:
        uVar3 = 0x95;
        break;
      case 0xa2:
        uVar3 = 0x96;
        break;
      case 0xa3:
        uVar3 = 0x97;
        break;
      case 0xa4:
        uVar3 = 0x98;
        break;
      case 0xa5:
        uVar3 = 0x99;
        break;
      case 0xa6:
        uVar3 = 0x9a;
        break;
      case 0xa7:
        uVar3 = 0x9b;
        break;
      case 0xa8:
        uVar3 = 0x9c;
        break;
      case 0xa9:
        uVar3 = 0x9d;
        break;
      case 0xaa:
        uVar3 = 0x9e;
        break;
      case 0xab:
        uVar3 = 0x9f;
        break;
      case 0xac:
        uVar3 = 0xa0;
        break;
      case 0xad:
        uVar3 = 0xa1;
        break;
      case 0xae:
        uVar3 = 0xa2;
        break;
      case 0xaf:
        uVar3 = 0xa3;
        break;
      case 0xb0:
        uVar3 = 0xa4;
        break;
      case 0xb1:
        uVar3 = 0xa5;
        break;
      case 0xb2:
        uVar3 = 0xa6;
        break;
      case 0xb3:
        uVar3 = 0xa7;
        break;
      case 0xb4:
        uVar3 = 0xa8;
        break;
      case 0xb5:
        uVar3 = 0xa9;
        break;
      case 0xb6:
        uVar3 = 0xaa;
        break;
      case 0xb7:
        uVar3 = 0xab;
        break;
      case 0xb8:
        uVar3 = 0xac;
        break;
      case 0xb9:
        uVar3 = 0xad;
        break;
      case 0xba:
        uVar3 = 0xae;
        break;
      case 0xbb:
        uVar3 = 0xaf;
        break;
      case 0xbc:
        uVar3 = 0xb0;
        break;
      case 0xbd:
        uVar3 = 0xb1;
        break;
      case 0xbe:
        uVar3 = 0xb2;
        break;
      case 0xbf:
        uVar3 = 0xb3;
        break;
      case 0xc0:
        uVar3 = 0xb4;
        break;
      case 0xc1:
        uVar3 = 0xb5;
        break;
      case 0xc2:
        uVar3 = 0xb6;
        break;
      case 0xc3:
        uVar3 = 0xb7;
        break;
      case 0xc4:
        uVar3 = 0xb8;
        break;
      case 0xc5:
        uVar3 = 0xb9;
        break;
      case 0xff:
        uVar3 = 0xba;
        break;
      default:
        switch(uVar1) {
        case 0x1301:
          uVar3 = 0xbb;
          break;
        case 0x1302:
          uVar3 = 0xbc;
          break;
        case 0x1303:
          uVar3 = 0xbd;
          break;
        case 0x1304:
          uVar3 = 0xbe;
          break;
        case 0x1305:
          uVar3 = 0xbf;
        }
      }
    }
    else if (uVar1 < 0xcca8) {
      switch(uVar1) {
      case 0xc001:
        uVar3 = 0xc0;
        break;
      case 0xc002:
        uVar3 = 0xc1;
        break;
      case 0xc003:
        uVar3 = 0xc2;
        break;
      case 0xc004:
        uVar3 = 0xc3;
        break;
      case 0xc005:
        uVar3 = 0xc4;
        break;
      case 0xc006:
        uVar3 = 0xc5;
        break;
      case 0xc007:
        uVar3 = 0xc6;
        break;
      case 0xc008:
        uVar3 = 199;
        break;
      case 0xc009:
        uVar3 = 200;
        break;
      case 0xc00a:
        uVar3 = 0xc9;
        break;
      case 0xc00b:
        uVar3 = 0xca;
        break;
      case 0xc00c:
        uVar3 = 0xcb;
        break;
      case 0xc00d:
        uVar3 = 0xcc;
        break;
      case 0xc00e:
        uVar3 = 0xcd;
        break;
      case 0xc00f:
        uVar3 = 0xce;
        break;
      case 0xc010:
        uVar3 = 0xcf;
        break;
      case 0xc011:
        uVar3 = 0xd0;
        break;
      case 0xc012:
        uVar3 = 0xd1;
        break;
      case 0xc013:
        uVar3 = 0xd2;
        break;
      case 0xc014:
        uVar3 = 0xd3;
        break;
      case 0xc015:
        uVar3 = 0xd4;
        break;
      case 0xc016:
        uVar3 = 0xd5;
        break;
      case 0xc017:
        uVar3 = 0xd6;
        break;
      case 0xc018:
        uVar3 = 0xd7;
        break;
      case 0xc019:
        uVar3 = 0xd8;
        break;
      case 0xc01a:
        uVar3 = 0xd9;
        break;
      case 0xc01b:
        uVar3 = 0xda;
        break;
      case 0xc01c:
        uVar3 = 0xdb;
        break;
      case 0xc01d:
        uVar3 = 0xdc;
        break;
      case 0xc01e:
        uVar3 = 0xdd;
        break;
      case 0xc01f:
        uVar3 = 0xde;
        break;
      case 0xc020:
        uVar3 = 0xdf;
        break;
      case 0xc021:
        uVar3 = 0xe0;
        break;
      case 0xc022:
        uVar3 = 0xe1;
        break;
      case 0xc023:
        uVar3 = 0xe2;
        break;
      case 0xc024:
        uVar3 = 0xe3;
        break;
      case 0xc025:
        uVar3 = 0xe4;
        break;
      case 0xc026:
        uVar3 = 0xe5;
        break;
      case 0xc027:
        uVar3 = 0xe6;
        break;
      case 0xc028:
        uVar3 = 0xe7;
        break;
      case 0xc029:
        uVar3 = 0xe8;
        break;
      case 0xc02a:
        uVar3 = 0xe9;
        break;
      case 0xc02b:
        uVar3 = 0xea;
        break;
      case 0xc02c:
        uVar3 = 0xeb;
        break;
      case 0xc02d:
        uVar3 = 0xec;
        break;
      case 0xc02e:
        uVar3 = 0xed;
        break;
      case 0xc02f:
        uVar3 = 0xee;
        break;
      case 0xc030:
        uVar3 = 0xef;
        break;
      case 0xc031:
        uVar3 = 0xf0;
        break;
      case 0xc032:
        uVar3 = 0xf1;
        break;
      case 0xc033:
        uVar3 = 0xf2;
        break;
      case 0xc034:
        uVar3 = 0xf3;
        break;
      case 0xc035:
        uVar3 = 0xf4;
        break;
      case 0xc036:
        uVar3 = 0xf5;
        break;
      case 0xc037:
        uVar3 = 0xf6;
        break;
      case 0xc038:
        uVar3 = 0xf7;
        break;
      case 0xc039:
        uVar3 = 0xf8;
        break;
      case 0xc03a:
        uVar3 = 0xf9;
        break;
      case 0xc03b:
        uVar3 = 0xfa;
        break;
      case 0xc03c:
        uVar3 = 0xfb;
        break;
      case 0xc03d:
        uVar3 = 0xfc;
        break;
      case 0xc03e:
        uVar3 = 0xfd;
        break;
      case 0xc03f:
        uVar3 = 0xfe;
        break;
      case 0xc040:
        uVar3 = 0xff;
        break;
      case 0xc041:
        uVar3 = 0x100;
        break;
      case 0xc042:
        uVar3 = 0x101;
        break;
      case 0xc043:
        uVar3 = 0x102;
        break;
      case 0xc044:
        uVar3 = 0x103;
        break;
      case 0xc045:
        uVar3 = 0x104;
        break;
      case 0xc046:
        uVar3 = 0x105;
        break;
      case 0xc047:
        uVar3 = 0x106;
        break;
      case 0xc048:
        uVar3 = 0x107;
        break;
      case 0xc049:
        uVar3 = 0x108;
        break;
      case 0xc04a:
        uVar3 = 0x109;
        break;
      case 0xc04b:
        uVar3 = 0x10a;
        break;
      case 0xc04c:
        uVar3 = 0x10b;
        break;
      case 0xc04d:
        uVar3 = 0x10c;
        break;
      case 0xc04e:
        uVar3 = 0x10d;
        break;
      case 0xc04f:
        uVar3 = 0x10e;
        break;
      case 0xc050:
        uVar3 = 0x10f;
        break;
      case 0xc051:
        uVar3 = 0x110;
        break;
      case 0xc052:
        uVar3 = 0x111;
        break;
      case 0xc053:
        uVar3 = 0x112;
        break;
      case 0xc054:
        uVar3 = 0x113;
        break;
      case 0xc055:
        uVar3 = 0x114;
        break;
      case 0xc056:
        uVar3 = 0x115;
        break;
      case 0xc057:
        uVar3 = 0x116;
        break;
      case 0xc058:
        uVar3 = 0x117;
        break;
      case 0xc059:
        uVar3 = 0x118;
        break;
      case 0xc05a:
        uVar3 = 0x119;
        break;
      case 0xc05b:
        uVar3 = 0x11a;
        break;
      case 0xc05c:
        uVar3 = 0x11b;
        break;
      case 0xc05d:
        uVar3 = 0x11c;
        break;
      case 0xc05e:
        uVar3 = 0x11d;
        break;
      case 0xc05f:
        uVar3 = 0x11e;
        break;
      case 0xc060:
        uVar3 = 0x11f;
        break;
      case 0xc061:
        uVar3 = 0x120;
        break;
      case 0xc062:
        uVar3 = 0x121;
        break;
      case 0xc063:
        uVar3 = 0x122;
        break;
      case 0xc064:
        uVar3 = 0x123;
        break;
      case 0xc065:
        uVar3 = 0x124;
        break;
      case 0xc066:
        uVar3 = 0x125;
        break;
      case 0xc067:
        uVar3 = 0x126;
        break;
      case 0xc068:
        uVar3 = 0x127;
        break;
      case 0xc069:
        uVar3 = 0x128;
        break;
      case 0xc06a:
        uVar3 = 0x129;
        break;
      case 0xc06b:
        uVar3 = 0x12a;
        break;
      case 0xc06c:
        uVar3 = 299;
        break;
      case 0xc06d:
        uVar3 = 300;
        break;
      case 0xc06e:
        uVar3 = 0x12d;
        break;
      case 0xc06f:
        uVar3 = 0x12e;
        break;
      case 0xc070:
        uVar3 = 0x12f;
        break;
      case 0xc071:
        uVar3 = 0x130;
        break;
      case 0xc072:
        uVar3 = 0x131;
        break;
      case 0xc073:
        uVar3 = 0x132;
        break;
      case 0xc074:
        uVar3 = 0x133;
        break;
      case 0xc075:
        uVar3 = 0x134;
        break;
      case 0xc076:
        uVar3 = 0x135;
        break;
      case 0xc077:
        uVar3 = 0x136;
        break;
      case 0xc078:
        uVar3 = 0x137;
        break;
      case 0xc079:
        uVar3 = 0x138;
        break;
      case 0xc07a:
        uVar3 = 0x139;
        break;
      case 0xc07b:
        uVar3 = 0x13a;
        break;
      case 0xc07c:
        uVar3 = 0x13b;
        break;
      case 0xc07d:
        uVar3 = 0x13c;
        break;
      case 0xc07e:
        uVar3 = 0x13d;
        break;
      case 0xc07f:
        uVar3 = 0x13e;
        break;
      case 0xc080:
        uVar3 = 0x13f;
        break;
      case 0xc081:
        uVar3 = 0x140;
        break;
      case 0xc082:
        uVar3 = 0x141;
        break;
      case 0xc083:
        uVar3 = 0x142;
        break;
      case 0xc084:
        uVar3 = 0x143;
        break;
      case 0xc085:
        uVar3 = 0x144;
        break;
      case 0xc086:
        uVar3 = 0x145;
        break;
      case 0xc087:
        uVar3 = 0x146;
        break;
      case 0xc088:
        uVar3 = 0x147;
        break;
      case 0xc089:
        uVar3 = 0x148;
        break;
      case 0xc08a:
        uVar3 = 0x149;
        break;
      case 0xc08b:
        uVar3 = 0x14a;
        break;
      case 0xc08c:
        uVar3 = 0x14b;
        break;
      case 0xc08d:
        uVar3 = 0x14c;
        break;
      case 0xc08e:
        uVar3 = 0x14d;
        break;
      case 0xc08f:
        uVar3 = 0x14e;
        break;
      case 0xc090:
        uVar3 = 0x14f;
        break;
      case 0xc091:
        uVar3 = 0x150;
        break;
      case 0xc092:
        uVar3 = 0x151;
        break;
      case 0xc093:
        uVar3 = 0x152;
        break;
      case 0xc094:
        uVar3 = 0x153;
        break;
      case 0xc095:
        uVar3 = 0x154;
        break;
      case 0xc096:
        uVar3 = 0x155;
        break;
      case 0xc097:
        uVar3 = 0x156;
        break;
      case 0xc098:
        uVar3 = 0x157;
        break;
      case 0xc099:
        uVar3 = 0x158;
        break;
      case 0xc09a:
        uVar3 = 0x159;
        break;
      case 0xc09b:
        uVar3 = 0x15a;
        break;
      case 0xc09c:
        uVar3 = 0x15b;
        break;
      case 0xc09d:
        uVar3 = 0x15c;
        break;
      case 0xc09e:
        uVar3 = 0x15d;
        break;
      case 0xc09f:
        uVar3 = 0x15e;
        break;
      case 0xc0a0:
        uVar3 = 0x15f;
        break;
      case 0xc0a1:
        uVar3 = 0x160;
        break;
      case 0xc0a2:
        uVar3 = 0x161;
        break;
      case 0xc0a3:
        uVar3 = 0x162;
        break;
      case 0xc0a4:
        uVar3 = 0x163;
        break;
      case 0xc0a5:
        uVar3 = 0x164;
        break;
      case 0xc0a6:
        uVar3 = 0x165;
        break;
      case 0xc0a7:
        uVar3 = 0x166;
        break;
      case 0xc0a8:
        uVar3 = 0x167;
        break;
      case 0xc0a9:
        uVar3 = 0x168;
        break;
      case 0xc0aa:
        uVar3 = 0x169;
        break;
      case 0xc0ab:
        uVar3 = 0x16a;
        break;
      case 0xc0ac:
        uVar3 = 0x16b;
        break;
      case 0xc0ad:
        uVar3 = 0x16c;
        break;
      case 0xc0ae:
        uVar3 = 0x16d;
        break;
      case 0xc0af:
        uVar3 = 0x16e;
      }
    }
    else {
      switch(uVar1) {
      case 0xcca8:
        uVar3 = 0x16f;
        break;
      case 0xcca9:
        uVar3 = 0x170;
        break;
      case 0xccaa:
        uVar3 = 0x171;
        break;
      case 0xccab:
        uVar3 = 0x172;
        break;
      case 0xccac:
        uVar3 = 0x173;
        break;
      case 0xccad:
        uVar3 = 0x174;
        break;
      case 0xccae:
        uVar3 = 0x175;
        break;
      default:
        if (uVar1 == 0xfefe) {
          uVar3 = 0x176;
        }
        else if (uVar1 == 0xfeff) {
          uVar3 = 0x177;
        }
      }
    }
    *(ushort *)(param_1 + 2) = uVar3;
    uVar2 = 0x14;
    *(ushort *)(param_1 + 4) = uVar1;
  }
  *param_1 = uVar2;
  return;
}

