// FUN_0125b7e4 @ 0125b7e4 size=1520 calls_out=3 calls_in=1
// strings: Antminer S21 XP Hyd. | Antminer S21e Hyd. | Antminer S21Imm | Antminer S23 Hyd. | Unknown Antminer X19 model | Antminer S9

void FUN_0125b7e4(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 0:
    uVar4 = 0x1a;
    iVar1 = thunk_FUN_01be5118(0x1a);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x1a);
    }
    uVar3 = 0x1a;
    pcVar2 = "Unknown Antminer X19 model";
    break;
  case 1:
    uVar4 = 0xb;
    iVar1 = thunk_FUN_01be5118(0xb);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xb);
    }
    uVar3 = 0xb;
    pcVar2 = "Antminer S9";
    break;
  default:
    iVar1 = thunk_FUN_01be5118(0xc);
    if (iVar1 == 0) {
LAB_0125bdf4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xc);
    }
    pcVar2 = "Antminer S19";
    goto LAB_0125b8c0;
  case 3:
    iVar1 = thunk_FUN_01be5118(0x12);
    if (iVar1 == 0) {
LAB_0125be00:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x12);
    }
    pcVar2 = "Antminer S19 Hydro";
    goto LAB_0125bbcc;
  case 4:
    iVar1 = thunk_FUN_01be5118(0x10);
    if (iVar1 == 0) {
LAB_0125be3c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x10);
    }
    pcVar2 = &DAT_00568d98;
    goto LAB_0125bdd0;
  case 5:
    uVar4 = 0x16;
    iVar1 = thunk_FUN_01be5118(0x16);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x16);
    }
    uVar3 = 0x16;
    pcVar2 = "Antminer S19 Pro+ Hyd.";
    break;
  case 6:
  case 7:
    iVar1 = thunk_FUN_01be5118(0x11);
    if (iVar1 == 0) {
LAB_0125bde8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x11);
    }
    pcVar2 = "Antminer S19j Pro";
    goto LAB_0125bb7c;
  case 8:
    iVar1 = thunk_FUN_01be5118(0x12);
    if (iVar1 == 0) goto LAB_0125be00;
    pcVar2 = "Antminer S19j Pro+";
    goto LAB_0125bbcc;
  case 9:
    iVar1 = thunk_FUN_01be5118(0x11);
    if (iVar1 == 0) goto LAB_0125bde8;
    pcVar2 = "Antminer S19k Pro";
    goto LAB_0125bb7c;
  case 0xd:
    iVar1 = thunk_FUN_01be5118(0xd);
    if (iVar1 == 0) {
LAB_0125be0c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xd);
    }
    pcVar2 = "Antminer S19a";
    goto LAB_0125bda4;
  case 0xe:
    iVar1 = thunk_FUN_01be5118(0x11);
    if (iVar1 == 0) goto LAB_0125bde8;
    pcVar2 = "Antminer S19a Pro";
    goto LAB_0125bb7c;
  case 0xf:
    iVar1 = thunk_FUN_01be5118(0xd);
    if (iVar1 == 0) goto LAB_0125be0c;
    pcVar2 = "Antminer S19j";
    goto LAB_0125bda4;
  case 0x10:
    iVar1 = thunk_FUN_01be5118(0xd);
    if (iVar1 == 0) goto LAB_0125be0c;
    pcVar2 = "Antminer S19+";
    goto LAB_0125bda4;
  case 0x11:
    iVar1 = thunk_FUN_01be5118(0xc);
    if (iVar1 == 0) goto LAB_0125bdf4;
    pcVar2 = "Antminer T19";
    goto LAB_0125b8c0;
  case 0x12:
    iVar1 = thunk_FUN_01be5118(0xf);
    if (iVar1 == 0) {
LAB_0125be24:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xf);
    }
    pcVar2 = "Antminer S19 XP";
    goto LAB_0125bc8c;
  case 0x13:
    iVar1 = thunk_FUN_01be5118(0x14);
    if (iVar1 == 0) {
LAB_0125be18:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x14);
    }
    pcVar2 = "Antminer S19 XP Hyd.";
    goto LAB_0125bd78;
  case 0x14:
    iVar1 = thunk_FUN_01be5118(0x15);
    if (iVar1 == 0) {
LAB_0125be30:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x15);
    }
    pcVar2 = "Antminer T19 Pro Hyd.";
    goto LAB_0125bd04;
  case 0x15:
    iVar1 = thunk_FUN_01be5118(0xc);
    if (iVar1 == 0) goto LAB_0125bdf4;
    pcVar2 = "Antminer S21";
    goto LAB_0125b8c0;
  case 0x16:
    iVar1 = thunk_FUN_01be5118(0xc);
    if (iVar1 == 0) goto LAB_0125bdf4;
    pcVar2 = "Antminer T21";
LAB_0125b8c0:
    uVar4 = 0xc;
    uVar3 = 0xc;
    break;
  case 0x17:
    iVar1 = thunk_FUN_01be5118(0x10);
    if (iVar1 == 0) goto LAB_0125be3c;
    pcVar2 = &DAT_0056a4c8;
    goto LAB_0125bdd0;
  case 0x18:
    iVar1 = thunk_FUN_01be5118(0x11);
    if (iVar1 == 0) goto LAB_0125bde8;
    pcVar2 = "Antminer S21 Pro+";
    goto LAB_0125bb7c;
  case 0x19:
    iVar1 = thunk_FUN_01be5118(0xf);
    if (iVar1 == 0) goto LAB_0125be24;
    pcVar2 = "Antminer S21 XP";
    goto LAB_0125bc8c;
  case 0x1a:
    iVar1 = thunk_FUN_01be5118(0x10);
    if (iVar1 == 0) goto LAB_0125be3c;
    pcVar2 = &DAT_00568f78;
LAB_0125bdd0:
    uVar4 = 0x10;
    uVar3 = 0x10;
    break;
  case 0x1b:
    iVar1 = thunk_FUN_01be5118(0xf);
    if (iVar1 == 0) goto LAB_0125be24;
    pcVar2 = "Antminer S21Imm";
LAB_0125bc8c:
    uVar4 = 0xf;
    uVar3 = 0xf;
    break;
  case 0x1c:
    iVar1 = thunk_FUN_01be5118(0x14);
    if (iVar1 == 0) goto LAB_0125be18;
    pcVar2 = "Antminer S21 XP Imm.";
    goto LAB_0125bd78;
  case 0x1d:
    iVar1 = thunk_FUN_01be5118(0xd);
    if (iVar1 == 0) goto LAB_0125be0c;
    pcVar2 = "Antminer S21+";
LAB_0125bda4:
    uVar4 = 0xd;
    uVar3 = 0xd;
    break;
  case 0x1e:
    uVar4 = 0xe;
    iVar1 = thunk_FUN_01be5118(0xe);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xe);
    }
    uVar3 = 0xe;
    pcVar2 = "Antminer S21++";
    break;
  case 0x1f:
    iVar1 = thunk_FUN_01be5118(0x11);
    if (iVar1 == 0) goto LAB_0125bde8;
    pcVar2 = "Antminer S21 Hyd.";
    goto LAB_0125bb7c;
  case 0x20:
  case 0x21:
    iVar1 = thunk_FUN_01be5118(0x12);
    if (iVar1 == 0) goto LAB_0125be00;
    pcVar2 = "Antminer S21+ Hyd.";
    goto LAB_0125bbcc;
  case 0x22:
    iVar1 = thunk_FUN_01be5118(0x12);
    if (iVar1 == 0) goto LAB_0125be00;
    pcVar2 = "Antminer U3S21EXPH";
    goto LAB_0125bbcc;
  case 0x23:
    iVar1 = thunk_FUN_01be5118(0x15);
    if (iVar1 == 0) goto LAB_0125be30;
    pcVar2 = "Antminer S19e XP Hyd.";
    goto LAB_0125bd04;
  case 0x24:
    iVar1 = thunk_FUN_01be5118(0x12);
    if (iVar1 == 0) goto LAB_0125be00;
    pcVar2 = "Antminer S21e Hyd.";
LAB_0125bbcc:
    uVar4 = 0x12;
    uVar3 = 0x12;
    break;
  case 0x25:
  case 0x26:
    iVar1 = thunk_FUN_01be5118(0x14);
    if (iVar1 == 0) goto LAB_0125be18;
    pcVar2 = "Antminer S21 XP Hyd.";
LAB_0125bd78:
    uVar4 = 0x14;
    uVar3 = 0x14;
    break;
  case 0x27:
    iVar1 = thunk_FUN_01be5118(0x15);
    if (iVar1 == 0) goto LAB_0125be30;
    pcVar2 = "Antminer S19 XP+ Hyd.";
LAB_0125bd04:
    uVar4 = 0x15;
    uVar3 = 0x15;
    break;
  case 0x28:
    iVar1 = thunk_FUN_01be5118(0x11);
    if (iVar1 == 0) goto LAB_0125bde8;
    pcVar2 = "Antminer S23 Hyd.";
LAB_0125bb7c:
    uVar4 = 0x11;
    uVar3 = 0x11;
  }
  FUN_01bed4e2(iVar1,pcVar2,uVar3);
  *param_1 = uVar4;
  param_1[1] = iVar1;
  param_1[2] = uVar4;
  return;
}

