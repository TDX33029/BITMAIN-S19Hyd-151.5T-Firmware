// FUN_0126aa30 @ 0126aa30 size=1004 calls_out=5 calls_in=2
// strings: 

void FUN_0126aa30(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  uVar2 = param_4 - param_3;
  uVar5 = (param_5 & 0xfffffffc) + param_4;
  uVar3 = param_3 - param_4;
  if (param_3 < param_4 || param_3 - param_4 == 0) {
    uVar3 = uVar2;
  }
  if ((param_3 < param_4) && (uVar3 == 1)) {
    uVar3 = param_4 - 1;
    if (param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,param_2,&DAT_0188b14c);
    }
    if ((uVar5 < param_4) || (param_2 < uVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(param_4,uVar5,param_2,&DAT_0188b15c);
    }
    FUN_016dd606(param_1 + param_4,*(undefined1 *)(param_1 + uVar3),param_5 & 0xfffffffc);
    param_3 = uVar5 - 1;
    param_4 = uVar5;
  }
  else {
    uVar3 = param_2 - 3;
    if (param_2 < 3) {
      uVar3 = 0;
    }
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
    bVar9 = param_3 <= param_4;
    bVar8 = param_4 == param_3;
    if (bVar9 && !bVar8) {
      bVar9 = 2 < uVar2;
      bVar8 = uVar2 == 3;
    }
    if (bVar9 && !bVar8) {
      if (param_4 < uVar3) {
        uVar2 = param_3;
        do {
          if (param_2 <= uVar2 + 3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar2 + 3,param_2,&DAT_0188b27c);
          }
          param_3 = uVar2 + 4;
          if (0xfffffffb < uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar2,param_3,param_2,&DAT_0188b27c);
          }
          if (param_2 - 4 < param_4) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0040bd8f,0x2b,&DAT_0188b27c);
          }
          *(undefined4 *)(param_1 + param_4) = *(undefined4 *)(param_1 + uVar2);
          param_4 = param_4 + 4;
          uVar2 = param_3;
        } while (param_4 < uVar3);
      }
    }
    else if (param_4 < uVar3) {
      iVar7 = 0;
      do {
        if (param_2 <= param_4 + iVar7 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_003b5792,0x2f,&DAT_0188b16c);
        }
        uVar2 = param_3 + iVar7;
        if (param_2 <= uVar2 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_003b57c1,0x48,&DAT_0188b17c);
        }
        if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar2,param_2,&DAT_0188b18c);
        }
        *(undefined1 *)(param_1 + param_4 + iVar7) = *(undefined1 *)(param_1 + param_3 + iVar7);
        if (param_2 <= uVar2 + 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar2 + 1,param_2,&DAT_0188b19c);
        }
        iVar4 = param_1 + param_3 + iVar7;
        iVar6 = param_1 + param_4 + iVar7;
        *(undefined1 *)(iVar6 + 1) = *(undefined1 *)(iVar4 + 1);
        if (param_2 <= uVar2 + 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar2 + 2,param_2,&DAT_0188b1ac);
        }
        iVar7 = iVar7 + 4;
        *(undefined1 *)(iVar6 + 2) = *(undefined1 *)(iVar4 + 2);
        *(undefined1 *)(iVar6 + 3) = *(undefined1 *)(iVar4 + 3);
      } while (param_4 + iVar7 < uVar3);
      param_3 = param_3 + iVar7;
      param_4 = param_4 + iVar7;
    }
  }
  switch(param_5 & 3) {
  case 0:
    goto switchD_0126aba8_caseD_0;
  case 1:
    if (param_2 <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_3,param_2,&DAT_0188b1bc);
    }
    if (param_2 <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_4,param_2,&DAT_0188b1cc);
    }
    goto LAB_0126ac64;
  case 2:
    if (param_2 <= param_4 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_003b5809,0x2f,&DAT_0188b1dc);
    }
    uVar3 = param_3 + 1;
    if (param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_003b5838,0x48,&DAT_0188b1ec);
    }
    if (param_2 <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_3,param_2,&DAT_0188b1fc);
    }
    uVar2 = param_4 + 1;
    uVar5 = param_4;
    if (param_2 <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_4,param_2,&DAT_0188b20c);
    }
    break;
  case 3:
    if (param_2 <= param_4 + 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_003b5880,0x2f,&DAT_0188b21c);
    }
    uVar3 = param_3 + 2;
    if (param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_003b58af,0x48,&DAT_0188b22c);
    }
    if (param_2 <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_3,param_2,&DAT_0188b23c);
    }
    if (param_2 <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_4,param_2,&DAT_0188b24c);
    }
    puVar1 = (undefined1 *)(param_1 + param_3);
    param_3 = param_3 + 1;
    *(undefined1 *)(param_1 + param_4) = *puVar1;
    if (param_2 <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_3,param_2,&DAT_0188b25c);
    }
    uVar5 = param_4 + 1;
    uVar2 = param_4 + 2;
    if (param_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5,param_2,&DAT_0188b26c);
    }
  }
  param_4 = uVar2;
  *(undefined1 *)(param_1 + uVar5) = *(undefined1 *)(param_1 + param_3);
  param_3 = uVar3;
LAB_0126ac64:
  *(undefined1 *)(param_1 + param_4) = *(undefined1 *)(param_1 + param_3);
switchD_0126aba8_caseD_0:
  return;
}

