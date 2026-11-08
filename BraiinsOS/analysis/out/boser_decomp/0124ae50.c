// FUN_0124ae50 @ 0124ae50 size=1804 calls_out=4 calls_in=1
// strings: Antminer S9 | Testboard braiins 1362-1x1 | Testboard braiins 1366-1x1 | Braiins Mini Miner BMM 100 | Braiins Mini Miner BMM 101 | Antminer S21 Immersion

void FUN_0124ae50(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [12];
  undefined4 *local_20;
  undefined2 *local_1c;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  switch(uVar5) {
  case 0xb:
    iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S9",0xb);
    if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
    uVar1 = 1;
    break;
  case 0xc:
    iVar3 = thunk_FUN_01bed842(uVar4,"Antminer X19",0xc);
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19",0xc);
      if (iVar3 == 0) {
        uVar1 = 2;
      }
      else {
        iVar3 = thunk_FUN_01bed842(uVar4,"Antminer T19",0xc);
        if (iVar3 == 0) {
          uVar1 = 0x11;
        }
        else {
          iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S21",0xc);
          if (iVar3 == 0) {
            uVar1 = 0x15;
          }
          else {
            iVar3 = thunk_FUN_01bed842(uVar4,"Antminer T21",0xc);
            if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
            uVar1 = 0x16;
          }
        }
      }
    }
    break;
  case 0xd:
    uVar1 = 0xd;
    iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19a",0xd);
    if (iVar3 != 0) {
      iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19J",0xd);
      if (iVar3 == 0) {
        uVar1 = 0xf;
      }
      else {
        iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19+",0xd);
        if (iVar3 == 0) {
          uVar1 = 0x10;
        }
        else {
          iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S21+",0xd);
          if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
          uVar1 = 0x1d;
        }
      }
    }
    break;
  case 0xe:
    iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S21++",0xe);
    if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
    uVar1 = 0x1e;
    break;
  case 0xf:
    iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19J88",0xf);
    if (iVar3 == 0) {
      uVar1 = 10;
    }
    else {
      iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19 XP",0xf);
      if (iVar3 == 0) {
        uVar1 = 0x12;
      }
      else {
        iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S21 XP",0xf);
        if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
        uVar1 = 0x19;
      }
    }
    break;
  case 0x10:
    iVar3 = thunk_FUN_01bed842(uVar4,&DAT_00568d98,0x10);
    if (iVar3 == 0) {
      uVar1 = 4;
    }
    else {
      iVar3 = thunk_FUN_01bed842(uVar4,&DAT_0056a4c8,0x10);
      if (iVar3 == 0) {
        uVar1 = 0x17;
      }
      else {
        iVar3 = thunk_FUN_01bed842(uVar4,&DAT_00569f08,0x10);
        if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
        uVar1 = 0x1a;
      }
    }
    break;
  case 0x11:
    iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19J Pro",0x11);
    if (iVar3 == 0) {
      uVar1 = 6;
    }
    else {
      iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19a Pro",0x11);
      if (iVar3 == 0) {
        uVar1 = 0xe;
      }
      else {
        iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S21 Pro+",0x11);
        if (iVar3 == 0) {
          uVar1 = 0x18;
        }
        else {
          iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S21 Hyd.",0x11);
          if (iVar3 == 0) {
            uVar1 = 0x1f;
          }
          else {
            iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S23 Hyd.",uVar5);
            if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
            uVar1 = 0x28;
          }
        }
      }
    }
    break;
  case 0x12:
    iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19 Hydro",0x12);
    if (iVar3 == 0) {
      uVar1 = 3;
    }
    else {
      iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S21+ Hyd.",uVar5);
      if (iVar3 == 0) {
        uVar1 = 0x20;
      }
      else {
        iVar3 = thunk_FUN_01bed842(uVar4,"Antminer U3S21EXPH",uVar5);
        if (iVar3 == 0) {
          uVar1 = 0x22;
        }
        else {
          iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S21e Hyd.",uVar5);
          if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
          uVar1 = 0x24;
        }
      }
    }
    break;
  default:
    goto switchD_0124ae7c_caseD_13;
  case 0x14:
    iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19J88NoPic",0x14);
    if (iVar3 == 0) {
      uVar1 = 0xb;
    }
    else {
      iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S21 XP Imm.",0x14);
      if (iVar3 == 0) {
        uVar1 = 0x1c;
      }
      else {
        iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S21 XP Hyd.",uVar5);
        if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
        uVar1 = 0x25;
      }
    }
    break;
  case 0x15:
    iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19J126NoPic",0x15);
    if (iVar3 == 0) {
      uVar1 = 0xc;
    }
    else {
      iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19 XP Hydro",0x15);
      if (iVar3 == 0) {
        uVar1 = 0x13;
      }
      else {
        iVar3 = thunk_FUN_01bed842(uVar4,"Antminer T19 Pro Hyd.",0x15);
        if (iVar3 == 0) {
          uVar1 = 0x14;
        }
        else {
          iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S21+ Hyd. HV",uVar5);
          if (iVar3 == 0) {
            uVar1 = 0x21;
          }
          else {
            iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19e XP Hyd.",uVar5);
            if (iVar3 == 0) {
              uVar1 = 0x23;
            }
            else {
              iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19 XP+ Hyd.",uVar5);
              if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
              uVar1 = 0x27;
            }
          }
        }
      }
    }
    break;
  case 0x16:
    iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S21 Immersion",0x16);
    if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
    uVar1 = 0x1b;
    break;
  case 0x17:
    iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19J Pro NoPic",0x17);
    if (iVar3 == 0) {
      uVar1 = 7;
    }
    else {
      iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19K Pro NoPic",0x17);
      if (iVar3 == 0) {
        uVar1 = 9;
      }
      else {
        iVar3 = thunk_FUN_01bed842(uVar4,
                                   "Antminer S21 XP Hyd. HVmissing model specificationevent open/bosminer/bosminer-fan/src/hwmon.rs:94"
                                   ,0x17);
        if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
        uVar1 = 0x26;
      }
    }
    break;
  case 0x19:
    iVar3 = thunk_FUN_01bed842(uVar4,"Braiins Mini POC 1362-4x1",0x19);
    if (iVar3 == 0) {
      uVar1 = 4;
      goto LAB_0124b520;
    }
    goto switchD_0124ae7c_caseD_13;
  case 0x1a:
    iVar3 = thunk_FUN_01bed842(uVar4,"Testboard braiins 1362-1x1",0x1a);
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      iVar3 = thunk_FUN_01bed842(uVar4,"Testboard braiins 1366-1x1",0x1a);
      if (iVar3 == 0) {
        uVar1 = 1;
      }
      else {
        iVar3 = thunk_FUN_01bed842(uVar4,"Braiins Mini Miner BMM 100",0x1a);
        if (iVar3 == 0) {
          uVar1 = 2;
        }
        else {
          iVar3 = thunk_FUN_01bed842(uVar4,"Braiins Mini Miner BMM 101",0x1a);
          if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
          uVar1 = 3;
        }
      }
    }
LAB_0124b520:
    param_1[2] = uVar1;
    param_1[1] = 1;
    uVar2 = 0;
    goto LAB_0124b58c;
  case 0x1b:
    iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19 Pro Plus Hydro",0x1b);
    if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
    uVar1 = 5;
    break;
  case 0x1c:
    iVar3 = thunk_FUN_01bed842(uVar4,"Antminer S19J Pro Plus NoPic",0x1c);
    if (iVar3 != 0) goto switchD_0124ae7c_caseD_13;
    uVar1 = 8;
  }
  uVar2 = 0;
  param_1[2] = uVar1;
  param_1[1] = 0;
LAB_0124b58c:
  *param_1 = uVar2;
  FUN_019bb7e0(*param_2,uVar4);
  return;
switchD_0124ae7c_caseD_13:
  local_1c = &DAT_0132b6a0;
  local_20 = &uStack_34;
  FUN_0124b678(auStack_2c,&local_20);
  uVar5 = FUN_006679ac(auStack_2c);
  *(undefined4 *)(param_1 + 4) = uVar5;
  uVar2 = 1;
  goto LAB_0124b58c;
}

