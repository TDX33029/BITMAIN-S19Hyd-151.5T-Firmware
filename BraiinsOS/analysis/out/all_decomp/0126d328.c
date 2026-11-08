// FUN_0126d328 @ 0126d328 size=956 calls_out=5 calls_in=2
// strings: 

void FUN_0126d328(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  
  uVar2 = param_4 - param_3;
  uVar6 = (param_5 & 0xfffffffc) + param_4;
  uVar3 = param_3 - param_4;
  if (param_3 < param_4 || param_3 - param_4 == 0) {
    uVar3 = uVar2;
  }
  if ((param_3 < param_4) && (uVar3 == 1)) {
    uVar3 = param_4 - 1;
    if (param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,param_2,&DAT_0188b34c);
    }
    if ((uVar6 < param_4) || (param_2 < uVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(param_4,uVar6,param_2,&DAT_0188b35c);
    }
    FUN_016dd606(param_1 + param_4,*(undefined1 *)(param_1 + uVar3),param_5 & 0xfffffffc);
    param_3 = uVar6 - 1;
    param_4 = uVar6;
  }
  else {
    uVar3 = param_2 - 3;
    if (param_2 < 3) {
      uVar3 = 0;
    }
    if (uVar6 <= uVar3) {
      uVar3 = uVar6;
    }
    bVar10 = param_3 <= param_4;
    bVar9 = param_4 == param_3;
    if (bVar10 && !bVar9) {
      bVar10 = 2 < uVar2;
      bVar9 = uVar2 == 3;
    }
    if (bVar10 && !bVar9) {
      if (param_4 < uVar3) {
        uVar2 = param_3;
        do {
          if (param_2 <= uVar2 + 3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar2 + 3,param_2,&DAT_0188b47c);
          }
          param_3 = uVar2 + 4;
          if (0xfffffffb < uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar2,param_3,param_2,&DAT_0188b47c);
          }
          if (param_2 - 4 < param_4) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0040bd8f,0x2b,&DAT_0188b47c);
          }
          *(undefined4 *)(param_1 + param_4) = *(undefined4 *)(param_1 + uVar2);
          param_4 = param_4 + 4;
          uVar2 = param_3;
        } while (param_4 < uVar3);
      }
    }
    else if (param_4 < uVar3) {
      iVar8 = 0;
      do {
        if (param_2 <= param_4 + iVar8 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_003b5792,0x2f,&DAT_0188b36c);
        }
        uVar2 = param_3 + iVar8;
        if (param_2 <= uVar2 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_003b57c1,0x48,&DAT_0188b37c);
        }
        if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar2,param_2,&DAT_0188b38c);
        }
        *(undefined1 *)(param_1 + param_4 + iVar8) = *(undefined1 *)(param_1 + param_3 + iVar8);
        if (param_2 <= uVar2 + 1) {
          puVar5 = &DAT_0188b39c;
          param_3 = uVar2 + 1;
          goto LAB_0126d674;
        }
        iVar4 = param_1 + param_3 + iVar8;
        iVar7 = param_1 + param_4 + iVar8;
        *(undefined1 *)(iVar7 + 1) = *(undefined1 *)(iVar4 + 1);
        if (param_2 <= uVar2 + 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar2 + 2,param_2,&DAT_0188b3ac);
        }
        iVar8 = iVar8 + 4;
        *(undefined1 *)(iVar7 + 2) = *(undefined1 *)(iVar4 + 2);
        *(undefined1 *)(iVar7 + 3) = *(undefined1 *)(iVar4 + 3);
      } while (param_4 + iVar8 < uVar3);
      param_3 = param_3 + iVar8;
      param_4 = param_4 + iVar8;
    }
  }
  switch(param_5 & 3) {
  case 0:
    goto switchD_0126d4a8_caseD_0;
  case 1:
    if (param_2 <= param_3) {
      puVar5 = &DAT_0188b3bc;
LAB_0126d674:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_3,param_2,puVar5);
    }
    if (param_2 <= param_4) {
      puVar5 = &UNK_0188b3cc;
      param_3 = param_4;
      goto LAB_0126d674;
    }
    goto LAB_0126d55c;
  case 2:
    if (param_2 <= param_4 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_003b5809,0x2f,&DAT_0188b3dc);
    }
    uVar3 = param_3 + 1;
    if (param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_003b5838,0x48,&DAT_0188b3ec);
    }
    if (param_2 <= param_3) {
      puVar5 = &DAT_0188b3fc;
      goto LAB_0126d674;
    }
    uVar2 = param_4 + 1;
    uVar6 = param_4;
    if (param_2 <= param_4) {
      puVar5 = &UNK_0188b40c;
      param_3 = param_4;
      goto LAB_0126d674;
    }
    break;
  case 3:
    if (param_2 <= param_4 + 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_003b5880,0x2f,&DAT_0188b41c);
    }
    uVar3 = param_3 + 2;
    if (param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_003b58af,0x48,&DAT_0188b42c);
    }
    if (param_2 <= param_3) {
      puVar5 = &DAT_0188b43c;
      goto LAB_0126d674;
    }
    if (param_2 <= param_4) {
      puVar5 = &UNK_0188b44c;
      param_3 = param_4;
      goto LAB_0126d674;
    }
    puVar1 = (undefined1 *)(param_1 + param_3);
    param_3 = param_3 + 1;
    *(undefined1 *)(param_1 + param_4) = *puVar1;
    if (param_2 <= param_3) {
      puVar5 = &DAT_0188b45c;
      goto LAB_0126d674;
    }
    uVar6 = param_4 + 1;
    uVar2 = param_4 + 2;
    if (param_2 <= uVar6) {
      puVar5 = &DAT_0188b46c;
      param_3 = uVar6;
      goto LAB_0126d674;
    }
  }
  param_4 = uVar2;
  *(undefined1 *)(param_1 + uVar6) = *(undefined1 *)(param_1 + param_3);
  param_3 = uVar3;
LAB_0126d55c:
  *(undefined1 *)(param_1 + param_4) = *(undefined1 *)(param_1 + param_3);
switchD_0126d4a8_caseD_0:
  return;
}

