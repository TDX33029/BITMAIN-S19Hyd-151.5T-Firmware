// FUN_0092f7cc @ 0092f7cc size=1560 calls_out=1 calls_in=2
// strings: Antminer S9 | Antminer S19 XP | Antminer S21 XP | Antminer S21 Pro | Antminer S19J XPUnsupportedEmpty | Antminer S21++

undefined4 FUN_0092f7cc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 0xb:
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S9",0xb);
    if (iVar1 == 0) {
      return 1;
    }
    break;
  case 0xc:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348a76,0xc);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S19",0xc);
    if (iVar1 == 0) {
      return 2;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer T19",0xc);
    if (iVar1 == 0) {
      return 0x11;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S21",0xc);
    if (iVar1 == 0) {
      return 0x15;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer T21",0xc);
    if (iVar1 == 0) {
      return 0x16;
    }
    break;
  case 0xd:
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S19a",0xd);
    if (iVar1 == 0) {
      return 0xd;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348b30,0xd);
    if (iVar1 == 0) {
      return 0xf;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S19+",0xd);
    if (iVar1 == 0) {
      return 0x10;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S21+",0xd);
    if (iVar1 == 0) {
      return 0x1d;
    }
    return 0x29;
  case 0xe:
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S21++",0xe);
    if (iVar1 == 0) {
      return 0x1e;
    }
    break;
  case 0xf:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348af8,0xf);
    if (iVar1 == 0) {
      return 10;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S19 XP",0xf);
    if (iVar1 == 0) {
      return 0x12;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S21 XP",0xf);
    uVar2 = 0x29;
    if (iVar1 == 0) {
      uVar2 = 0x19;
    }
    return uVar2;
  case 0x10:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00564890,0x10);
    if (iVar1 == 0) {
      return 4;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S21 Pro",0x10);
    if (iVar1 == 0) {
      return 0x17;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S19J XPUnsupportedEmpty",0x10);
    if (iVar1 == 0) {
      return 0x1a;
    }
    break;
  case 0x11:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348a9d,0x11);
    if (iVar1 == 0) {
      return 6;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S19a Pro",0x11);
    if (iVar1 == 0) {
      return 0xe;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S21 Pro+",0x11);
    if (iVar1 == 0) {
      return 0x18;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S21 Hyd.",0x11);
    if (iVar1 == 0) {
      return 0x1f;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_003489f0,param_2);
    uVar2 = 0x29;
    if (iVar1 == 0) {
      uVar2 = 0x28;
    }
    return uVar2;
  case 0x12:
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S19 Hydro",0x12);
    if (iVar1 == 0) {
      return 3;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S21+ Hyd.",param_2);
    if (iVar1 == 0) {
      return 0x20;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer U3S21EXPH",param_2);
    if (iVar1 == 0) {
      return 0x22;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S21e Hyd.",param_2);
    if (iVar1 == 0) {
      return 0x24;
    }
    return 0x29;
  case 0x14:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348b07,0x14);
    if (iVar1 == 0) {
      return 0xb;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S21 XP Imm.",0x14);
    if (iVar1 == 0) {
      return 0x1c;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S21 XP Hyd.",param_2);
    if (iVar1 == 0) {
      return 0x25;
    }
    return 0x29;
  case 0x15:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348b1b,0x15);
    if (iVar1 == 0) {
      return 0xc;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348b3d,0x15);
    if (iVar1 == 0) {
      return 0x13;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer T19 Pro Hyd.",0x15);
    if (iVar1 == 0) {
      return 0x14;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348b68,param_2);
    if (iVar1 == 0) {
      return 0x21;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S19e XP Hyd.",param_2);
    if (iVar1 == 0) {
      return 0x23;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"Antminer S19 XP+ Hyd.",param_2);
    uVar2 = 0x29;
    if (iVar1 == 0) {
      uVar2 = 0x27;
    }
    return uVar2;
  case 0x16:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348b52,0x16);
    if (iVar1 == 0) {
      return 0x1b;
    }
    break;
  case 0x17:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348aae,0x17);
    if (iVar1 == 0) {
      return 7;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348ae1,0x17);
    if (iVar1 == 0) {
      return 9;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348b7d,0x17);
    if (iVar1 == 0) {
      return 0x26;
    }
    return 0x29;
  case 0x1b:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348a82,0x1b);
    if (iVar1 == 0) {
      return 5;
    }
    break;
  case 0x1c:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00348ac5,0x1c);
    if (iVar1 == 0) {
      return 8;
    }
  }
  return 0x29;
}

