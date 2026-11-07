// FUN_01528fac @ 01528fac size=3280 calls_out=1 calls_in=3
// strings: 

void FUN_01528fac(undefined1 *param_1,int *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  if (uVar4 - uVar5 < 2) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 4) = &DAT_0040bca5;
    *(undefined4 *)(param_1 + 8) = 0xb;
    return;
  }
  uVar3 = uVar5 + 2;
  bVar7 = 0xfffffffc < uVar5;
  bVar6 = uVar5 == 0xfffffffd;
  if (uVar5 < 0xfffffffe) {
    bVar7 = uVar4 <= uVar3;
    bVar6 = uVar3 == uVar4;
  }
  param_2[2] = uVar3;
  if (!(bVar7 && !bVar6)) {
    uVar2 = 0x178;
    uVar1 = *(ushort *)(*param_2 + uVar5) << 8 | *(ushort *)(*param_2 + uVar5) >> 8;
    if (uVar1 < 0xc001) {
      switch(uVar1) {
      case 0:
        uVar2 = 0;
        break;
      case 1:
        uVar2 = 0x17;
        break;
      case 2:
        uVar2 = 0x18;
        break;
      case 3:
        uVar2 = 0x19;
        break;
      case 4:
        uVar2 = 0x1a;
        break;
      case 5:
        uVar2 = 0x1b;
        break;
      case 6:
        uVar2 = 0x1c;
        break;
      case 7:
        uVar2 = 0x1d;
        break;
      case 8:
        uVar2 = 0x1e;
        break;
      case 9:
        uVar2 = 0x1f;
        break;
      case 10:
        uVar2 = 0x20;
        break;
      case 0xb:
        uVar2 = 0x21;
        break;
      case 0xc:
        uVar2 = 0x22;
        break;
      case 0xd:
        uVar2 = 0x23;
        break;
      case 0xe:
        uVar2 = 0x24;
        break;
      case 0xf:
        uVar2 = 0x25;
        break;
      case 0x10:
        uVar2 = 0x26;
        break;
      case 0x11:
        uVar2 = 0x27;
        break;
      case 0x12:
        uVar2 = 0x28;
        break;
      case 0x13:
        uVar2 = 0x29;
        break;
      case 0x14:
        uVar2 = 0x2a;
        break;
      case 0x15:
        uVar2 = 0x2b;
        break;
      case 0x16:
        uVar2 = 0x2c;
        break;
      case 0x17:
        uVar2 = 0x2d;
        break;
      case 0x18:
        uVar2 = 0x2e;
        break;
      case 0x19:
        uVar2 = 0x2f;
        break;
      case 0x1a:
        uVar2 = 0x30;
        break;
      case 0x1b:
        uVar2 = 0x31;
        break;
      case 0x1c:
        uVar2 = 0x32;
        break;
      case 0x1d:
        uVar2 = 0x33;
        break;
      case 0x1e:
        uVar2 = 0x34;
        break;
      case 0x1f:
        uVar2 = 0x35;
        break;
      case 0x20:
        uVar2 = 0x36;
        break;
      case 0x21:
        uVar2 = 0x37;
        break;
      case 0x22:
        uVar2 = 0x38;
        break;
      case 0x23:
        uVar2 = 0x39;
        break;
      case 0x24:
        uVar2 = 0x3a;
        break;
      case 0x25:
        uVar2 = 0x3b;
        break;
      case 0x26:
        uVar2 = 0x3c;
        break;
      case 0x27:
        uVar2 = 0x3d;
        break;
      case 0x28:
        uVar2 = 0x3e;
        break;
      case 0x29:
        uVar2 = 0x3f;
        break;
      case 0x2a:
        uVar2 = 0x40;
        break;
      case 0x2b:
        uVar2 = 0x41;
        break;
      case 0x2c:
        uVar2 = 0x42;
        break;
      case 0x2d:
        uVar2 = 0x43;
        break;
      case 0x2e:
        uVar2 = 0x44;
        break;
      case 0x2f:
        uVar2 = 0x45;
        break;
      case 0x30:
        uVar2 = 0x46;
        break;
      case 0x31:
        uVar2 = 0x47;
        break;
      case 0x32:
        uVar2 = 0x48;
        break;
      case 0x33:
        uVar2 = 0x49;
        break;
      case 0x34:
        uVar2 = 0x4a;
        break;
      case 0x35:
        uVar2 = 0x4b;
        break;
      case 0x36:
        uVar2 = 0x4c;
        break;
      case 0x37:
        uVar2 = 0x4d;
        break;
      case 0x38:
        uVar2 = 0x4e;
        break;
      case 0x39:
        uVar2 = 0x4f;
        break;
      case 0x3a:
        uVar2 = 0x50;
        break;
      case 0x3b:
        uVar2 = 0x51;
        break;
      case 0x3c:
        uVar2 = 0x52;
        break;
      case 0x3d:
        uVar2 = 0x53;
        break;
      case 0x3e:
        uVar2 = 0x54;
        break;
      case 0x3f:
        uVar2 = 0x55;
        break;
      case 0x40:
        uVar2 = 0x56;
        break;
      case 0x41:
        uVar2 = 0x57;
        break;
      case 0x42:
        uVar2 = 0x58;
        break;
      case 0x43:
        uVar2 = 0x59;
        break;
      case 0x44:
        uVar2 = 0x5a;
        break;
      case 0x45:
        uVar2 = 0x5b;
        break;
      case 0x46:
        uVar2 = 0x5c;
        break;
      case 0x47:
        uVar2 = 0x5d;
        break;
      case 0x48:
        uVar2 = 0x5e;
        break;
      case 0x49:
        uVar2 = 0x5f;
        break;
      case 0x4a:
        uVar2 = 0x60;
        break;
      case 0x4b:
        uVar2 = 0x61;
        break;
      case 0x4c:
        uVar2 = 0x62;
        break;
      case 0x4d:
        uVar2 = 99;
        break;
      case 0x4e:
        uVar2 = 100;
        break;
      case 0x4f:
        uVar2 = 0x65;
        break;
      case 0x50:
        uVar2 = 0x66;
        break;
      case 0x51:
        uVar2 = 0x67;
        break;
      case 0x52:
        uVar2 = 0x68;
        break;
      case 0x53:
        uVar2 = 0x69;
        break;
      case 0x54:
        uVar2 = 0x6a;
        break;
      case 0x55:
        uVar2 = 0x6b;
        break;
      case 0x56:
        uVar2 = 0x6c;
        break;
      case 0x57:
        uVar2 = 0x6d;
        break;
      case 0x58:
        uVar2 = 0x6e;
        break;
      case 0x59:
        uVar2 = 0x6f;
        break;
      case 0x5a:
        uVar2 = 0x70;
        break;
      case 0x5b:
        uVar2 = 0x71;
        break;
      case 0x5c:
        uVar2 = 0x72;
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
        uVar2 = 0x73;
        break;
      case 0x61:
        uVar2 = 0x74;
        break;
      case 0x62:
        uVar2 = 0x75;
        break;
      case 99:
        uVar2 = 0x76;
        break;
      case 100:
        uVar2 = 0x77;
        break;
      case 0x65:
        uVar2 = 0x78;
        break;
      case 0x66:
        uVar2 = 0x79;
        break;
      case 0x67:
        uVar2 = 0x7a;
        break;
      case 0x68:
        uVar2 = 0x7b;
        break;
      case 0x69:
        uVar2 = 0x7c;
        break;
      case 0x6a:
        uVar2 = 0x7d;
        break;
      case 0x6b:
        uVar2 = 0x7e;
        break;
      case 0x6c:
        uVar2 = 0x7f;
        break;
      case 0x6d:
        uVar2 = 0x80;
        break;
      case 0x72:
        uVar2 = 0x81;
        break;
      case 0x73:
        uVar2 = 0x82;
        break;
      case 0x74:
        uVar2 = 0x83;
        break;
      case 0x77:
        uVar2 = 0x84;
        break;
      case 0x78:
        uVar2 = 0x85;
        break;
      case 0x79:
        uVar2 = 0x86;
        break;
      case 0x7c:
        uVar2 = 0x87;
        break;
      case 0x7d:
        uVar2 = 0x88;
        break;
      case 0x7e:
        uVar2 = 0x89;
        break;
      case 0x80:
        uVar2 = 0x8a;
        break;
      case 0x81:
        uVar2 = 0x8b;
        break;
      case 0x82:
        uVar2 = 0x8c;
        break;
      case 0x83:
        uVar2 = 0x8d;
        break;
      case 0x84:
        uVar2 = 0x8e;
        break;
      case 0x85:
        uVar2 = 0x8f;
        break;
      case 0x86:
        uVar2 = 0x90;
        break;
      case 0x87:
        uVar2 = 0x91;
        break;
      case 0x88:
        uVar2 = 0x92;
        break;
      case 0x89:
        uVar2 = 0x93;
        break;
      case 0x8a:
        uVar2 = 0x94;
        break;
      case 0x8b:
        uVar2 = 0x95;
        break;
      case 0x8c:
        uVar2 = 0x96;
        break;
      case 0x8d:
        uVar2 = 0x97;
        break;
      case 0x8e:
        uVar2 = 0x98;
        break;
      case 0x8f:
        uVar2 = 0x99;
        break;
      case 0x90:
        uVar2 = 0x9a;
        break;
      case 0x91:
        uVar2 = 0x9b;
        break;
      case 0x92:
        uVar2 = 0x9c;
        break;
      case 0x93:
        uVar2 = 0x9d;
        break;
      case 0x94:
        uVar2 = 0x9e;
        break;
      case 0x95:
        uVar2 = 0x9f;
        break;
      case 0x96:
        uVar2 = 0xa0;
        break;
      case 0x97:
        uVar2 = 0xa1;
        break;
      case 0x98:
        uVar2 = 0xa2;
        break;
      case 0x99:
        uVar2 = 0xa3;
        break;
      case 0x9a:
        uVar2 = 0xa4;
        break;
      case 0x9b:
        uVar2 = 0xa5;
        break;
      case 0x9c:
        uVar2 = 0xa6;
        break;
      case 0x9d:
        uVar2 = 0xa7;
        break;
      case 0x9e:
        uVar2 = 0xa8;
        break;
      case 0x9f:
        uVar2 = 0xa9;
        break;
      case 0xa0:
        uVar2 = 0xaa;
        break;
      case 0xa1:
        uVar2 = 0xab;
        break;
      case 0xa2:
        uVar2 = 0xac;
        break;
      case 0xa3:
        uVar2 = 0xad;
        break;
      case 0xa4:
        uVar2 = 0xae;
        break;
      case 0xa5:
        uVar2 = 0xaf;
        break;
      case 0xa6:
        uVar2 = 0xb0;
        break;
      case 0xa7:
        uVar2 = 0xb1;
        break;
      case 0xa8:
        uVar2 = 1;
        break;
      case 0xa9:
        uVar2 = 2;
        break;
      case 0xaa:
        uVar2 = 0xb2;
        break;
      case 0xab:
        uVar2 = 0xb3;
        break;
      case 0xac:
        uVar2 = 0xb4;
        break;
      case 0xad:
        uVar2 = 0xb5;
        break;
      case 0xae:
        uVar2 = 0xb6;
        break;
      case 0xaf:
        uVar2 = 0xb7;
        break;
      case 0xb0:
        uVar2 = 0xb8;
        break;
      case 0xb1:
        uVar2 = 0xb9;
        break;
      case 0xb2:
        uVar2 = 0xba;
        break;
      case 0xb3:
        uVar2 = 0xbb;
        break;
      case 0xb4:
        uVar2 = 0xbc;
        break;
      case 0xb5:
        uVar2 = 0xbd;
        break;
      case 0xb6:
        uVar2 = 0xbe;
        break;
      case 0xb7:
        uVar2 = 0xbf;
        break;
      case 0xb8:
        uVar2 = 0xc0;
        break;
      case 0xb9:
        uVar2 = 0xc1;
        break;
      case 0xba:
        uVar2 = 0xc2;
        break;
      case 0xbb:
        uVar2 = 0xc3;
        break;
      case 0xbc:
        uVar2 = 0xc4;
        break;
      case 0xbd:
        uVar2 = 0xc5;
        break;
      case 0xbe:
        uVar2 = 0xc6;
        break;
      case 0xbf:
        uVar2 = 199;
        break;
      case 0xc0:
        uVar2 = 200;
        break;
      case 0xc1:
        uVar2 = 0xc9;
        break;
      case 0xc2:
        uVar2 = 0xca;
        break;
      case 0xc3:
        uVar2 = 0xcb;
        break;
      case 0xc4:
        uVar2 = 0xcc;
        break;
      case 0xc5:
        uVar2 = 0xcd;
        break;
      case 0xff:
        uVar2 = 3;
        break;
      default:
        switch(uVar1) {
        case 0x1301:
          uVar2 = 4;
          break;
        case 0x1302:
          uVar2 = 5;
          break;
        case 0x1303:
          uVar2 = 6;
          break;
        case 0x1304:
          uVar2 = 7;
          break;
        case 0x1305:
          uVar2 = 8;
        }
      }
    }
    else if (uVar1 < 0xcca8) {
      switch(uVar1) {
      case 0xc001:
        uVar2 = 0xce;
        break;
      case 0xc002:
        uVar2 = 0xcf;
        break;
      case 0xc003:
        uVar2 = 0xd0;
        break;
      case 0xc004:
        uVar2 = 0xd1;
        break;
      case 0xc005:
        uVar2 = 0xd2;
        break;
      case 0xc006:
        uVar2 = 0xd3;
        break;
      case 0xc007:
        uVar2 = 0xd4;
        break;
      case 0xc008:
        uVar2 = 0xd5;
        break;
      case 0xc009:
        uVar2 = 9;
        break;
      case 0xc00a:
        uVar2 = 10;
        break;
      case 0xc00b:
        uVar2 = 0xd6;
        break;
      case 0xc00c:
        uVar2 = 0xd7;
        break;
      case 0xc00d:
        uVar2 = 0xd8;
        break;
      case 0xc00e:
        uVar2 = 0xd9;
        break;
      case 0xc00f:
        uVar2 = 0xda;
        break;
      case 0xc010:
        uVar2 = 0xdb;
        break;
      case 0xc011:
        uVar2 = 0xdc;
        break;
      case 0xc012:
        uVar2 = 0xdd;
        break;
      case 0xc013:
        uVar2 = 0xb;
        break;
      case 0xc014:
        uVar2 = 0xc;
        break;
      case 0xc015:
        uVar2 = 0xde;
        break;
      case 0xc016:
        uVar2 = 0xdf;
        break;
      case 0xc017:
        uVar2 = 0xe0;
        break;
      case 0xc018:
        uVar2 = 0xe1;
        break;
      case 0xc019:
        uVar2 = 0xe2;
        break;
      case 0xc01a:
        uVar2 = 0xe3;
        break;
      case 0xc01b:
        uVar2 = 0xe4;
        break;
      case 0xc01c:
        uVar2 = 0xe5;
        break;
      case 0xc01d:
        uVar2 = 0xe6;
        break;
      case 0xc01e:
        uVar2 = 0xe7;
        break;
      case 0xc01f:
        uVar2 = 0xe8;
        break;
      case 0xc020:
        uVar2 = 0xe9;
        break;
      case 0xc021:
        uVar2 = 0xea;
        break;
      case 0xc022:
        uVar2 = 0xeb;
        break;
      case 0xc023:
        uVar2 = 0xd;
        break;
      case 0xc024:
        uVar2 = 0xe;
        break;
      case 0xc025:
        uVar2 = 0xec;
        break;
      case 0xc026:
        uVar2 = 0xed;
        break;
      case 0xc027:
        uVar2 = 0xf;
        break;
      case 0xc028:
        uVar2 = 0x10;
        break;
      case 0xc029:
        uVar2 = 0xee;
        break;
      case 0xc02a:
        uVar2 = 0xef;
        break;
      case 0xc02b:
        uVar2 = 0x11;
        break;
      case 0xc02c:
        uVar2 = 0x12;
        break;
      case 0xc02d:
        uVar2 = 0xf0;
        break;
      case 0xc02e:
        uVar2 = 0xf1;
        break;
      case 0xc02f:
        uVar2 = 0x13;
        break;
      case 0xc030:
        uVar2 = 0x14;
        break;
      case 0xc031:
        uVar2 = 0xf2;
        break;
      case 0xc032:
        uVar2 = 0xf3;
        break;
      case 0xc033:
        uVar2 = 0xf4;
        break;
      case 0xc034:
        uVar2 = 0xf5;
        break;
      case 0xc035:
        uVar2 = 0xf6;
        break;
      case 0xc036:
        uVar2 = 0xf7;
        break;
      case 0xc037:
        uVar2 = 0xf8;
        break;
      case 0xc038:
        uVar2 = 0xf9;
        break;
      case 0xc039:
        uVar2 = 0xfa;
        break;
      case 0xc03a:
        uVar2 = 0xfb;
        break;
      case 0xc03b:
        uVar2 = 0xfc;
        break;
      case 0xc03c:
        uVar2 = 0xfd;
        break;
      case 0xc03d:
        uVar2 = 0xfe;
        break;
      case 0xc03e:
        uVar2 = 0xff;
        break;
      case 0xc03f:
        uVar2 = 0x100;
        break;
      case 0xc040:
        uVar2 = 0x101;
        break;
      case 0xc041:
        uVar2 = 0x102;
        break;
      case 0xc042:
        uVar2 = 0x103;
        break;
      case 0xc043:
        uVar2 = 0x104;
        break;
      case 0xc044:
        uVar2 = 0x105;
        break;
      case 0xc045:
        uVar2 = 0x106;
        break;
      case 0xc046:
        uVar2 = 0x107;
        break;
      case 0xc047:
        uVar2 = 0x108;
        break;
      case 0xc048:
        uVar2 = 0x109;
        break;
      case 0xc049:
        uVar2 = 0x10a;
        break;
      case 0xc04a:
        uVar2 = 0x10b;
        break;
      case 0xc04b:
        uVar2 = 0x10c;
        break;
      case 0xc04c:
        uVar2 = 0x10d;
        break;
      case 0xc04d:
        uVar2 = 0x10e;
        break;
      case 0xc04e:
        uVar2 = 0x10f;
        break;
      case 0xc04f:
        uVar2 = 0x110;
        break;
      case 0xc050:
        uVar2 = 0x111;
        break;
      case 0xc051:
        uVar2 = 0x112;
        break;
      case 0xc052:
        uVar2 = 0x113;
        break;
      case 0xc053:
        uVar2 = 0x114;
        break;
      case 0xc054:
        uVar2 = 0x115;
        break;
      case 0xc055:
        uVar2 = 0x116;
        break;
      case 0xc056:
        uVar2 = 0x117;
        break;
      case 0xc057:
        uVar2 = 0x118;
        break;
      case 0xc058:
        uVar2 = 0x119;
        break;
      case 0xc059:
        uVar2 = 0x11a;
        break;
      case 0xc05a:
        uVar2 = 0x11b;
        break;
      case 0xc05b:
        uVar2 = 0x11c;
        break;
      case 0xc05c:
        uVar2 = 0x11d;
        break;
      case 0xc05d:
        uVar2 = 0x11e;
        break;
      case 0xc05e:
        uVar2 = 0x11f;
        break;
      case 0xc05f:
        uVar2 = 0x120;
        break;
      case 0xc060:
        uVar2 = 0x121;
        break;
      case 0xc061:
        uVar2 = 0x122;
        break;
      case 0xc062:
        uVar2 = 0x123;
        break;
      case 0xc063:
        uVar2 = 0x124;
        break;
      case 0xc064:
        uVar2 = 0x125;
        break;
      case 0xc065:
        uVar2 = 0x126;
        break;
      case 0xc066:
        uVar2 = 0x127;
        break;
      case 0xc067:
        uVar2 = 0x128;
        break;
      case 0xc068:
        uVar2 = 0x129;
        break;
      case 0xc069:
        uVar2 = 0x12a;
        break;
      case 0xc06a:
        uVar2 = 299;
        break;
      case 0xc06b:
        uVar2 = 300;
        break;
      case 0xc06c:
        uVar2 = 0x12d;
        break;
      case 0xc06d:
        uVar2 = 0x12e;
        break;
      case 0xc06e:
        uVar2 = 0x12f;
        break;
      case 0xc06f:
        uVar2 = 0x130;
        break;
      case 0xc070:
        uVar2 = 0x131;
        break;
      case 0xc071:
        uVar2 = 0x132;
        break;
      case 0xc072:
        uVar2 = 0x133;
        break;
      case 0xc073:
        uVar2 = 0x134;
        break;
      case 0xc074:
        uVar2 = 0x135;
        break;
      case 0xc075:
        uVar2 = 0x136;
        break;
      case 0xc076:
        uVar2 = 0x137;
        break;
      case 0xc077:
        uVar2 = 0x138;
        break;
      case 0xc078:
        uVar2 = 0x139;
        break;
      case 0xc079:
        uVar2 = 0x13a;
        break;
      case 0xc07a:
        uVar2 = 0x13b;
        break;
      case 0xc07b:
        uVar2 = 0x13c;
        break;
      case 0xc07c:
        uVar2 = 0x13d;
        break;
      case 0xc07d:
        uVar2 = 0x13e;
        break;
      case 0xc07e:
        uVar2 = 0x13f;
        break;
      case 0xc07f:
        uVar2 = 0x140;
        break;
      case 0xc080:
        uVar2 = 0x141;
        break;
      case 0xc081:
        uVar2 = 0x142;
        break;
      case 0xc082:
        uVar2 = 0x143;
        break;
      case 0xc083:
        uVar2 = 0x144;
        break;
      case 0xc084:
        uVar2 = 0x145;
        break;
      case 0xc085:
        uVar2 = 0x146;
        break;
      case 0xc086:
        uVar2 = 0x147;
        break;
      case 0xc087:
        uVar2 = 0x148;
        break;
      case 0xc088:
        uVar2 = 0x149;
        break;
      case 0xc089:
        uVar2 = 0x14a;
        break;
      case 0xc08a:
        uVar2 = 0x14b;
        break;
      case 0xc08b:
        uVar2 = 0x14c;
        break;
      case 0xc08c:
        uVar2 = 0x14d;
        break;
      case 0xc08d:
        uVar2 = 0x14e;
        break;
      case 0xc08e:
        uVar2 = 0x14f;
        break;
      case 0xc08f:
        uVar2 = 0x150;
        break;
      case 0xc090:
        uVar2 = 0x151;
        break;
      case 0xc091:
        uVar2 = 0x152;
        break;
      case 0xc092:
        uVar2 = 0x153;
        break;
      case 0xc093:
        uVar2 = 0x154;
        break;
      case 0xc094:
        uVar2 = 0x155;
        break;
      case 0xc095:
        uVar2 = 0x156;
        break;
      case 0xc096:
        uVar2 = 0x157;
        break;
      case 0xc097:
        uVar2 = 0x158;
        break;
      case 0xc098:
        uVar2 = 0x159;
        break;
      case 0xc099:
        uVar2 = 0x15a;
        break;
      case 0xc09a:
        uVar2 = 0x15b;
        break;
      case 0xc09b:
        uVar2 = 0x15c;
        break;
      case 0xc09c:
        uVar2 = 0x15d;
        break;
      case 0xc09d:
        uVar2 = 0x15e;
        break;
      case 0xc09e:
        uVar2 = 0x15f;
        break;
      case 0xc09f:
        uVar2 = 0x160;
        break;
      case 0xc0a0:
        uVar2 = 0x161;
        break;
      case 0xc0a1:
        uVar2 = 0x162;
        break;
      case 0xc0a2:
        uVar2 = 0x163;
        break;
      case 0xc0a3:
        uVar2 = 0x164;
        break;
      case 0xc0a4:
        uVar2 = 0x165;
        break;
      case 0xc0a5:
        uVar2 = 0x166;
        break;
      case 0xc0a6:
        uVar2 = 0x167;
        break;
      case 0xc0a7:
        uVar2 = 0x168;
        break;
      case 0xc0a8:
        uVar2 = 0x169;
        break;
      case 0xc0a9:
        uVar2 = 0x16a;
        break;
      case 0xc0aa:
        uVar2 = 0x16b;
        break;
      case 0xc0ab:
        uVar2 = 0x16c;
        break;
      case 0xc0ac:
        uVar2 = 0x16d;
        break;
      case 0xc0ad:
        uVar2 = 0x16e;
        break;
      case 0xc0ae:
        uVar2 = 0x16f;
        break;
      case 0xc0af:
        uVar2 = 0x170;
      }
    }
    else {
      switch(uVar1) {
      case 0xcca8:
        uVar2 = 0x15;
        break;
      case 0xcca9:
        uVar2 = 0x16;
        break;
      case 0xccaa:
        uVar2 = 0x171;
        break;
      case 0xccab:
        uVar2 = 0x172;
        break;
      case 0xccac:
        uVar2 = 0x173;
        break;
      case 0xccad:
        uVar2 = 0x174;
        break;
      case 0xccae:
        uVar2 = 0x175;
        break;
      default:
        if (uVar1 == 0xfefe) {
          uVar2 = 0x176;
        }
        else {
          uVar2 = 0x178;
          if (uVar1 == 0xfeff) {
            uVar2 = 0x177;
          }
        }
      }
    }
    *(ushort *)(param_1 + 4) = uVar1;
    *(undefined2 *)(param_1 + 2) = uVar2;
    *param_1 = 0x18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(uVar5,uVar3,uVar4,&DAT_018a78f8);
}

