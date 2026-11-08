// FUN_016cf590 @ 016cf590 size=564 calls_out=2 calls_in=2
// strings: 

void FUN_016cf590(undefined4 *param_1,int param_2,uint param_3,uint param_4,char *param_5,
                 uint param_6)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  uint uVar12;
  
  iVar2 = FUN_016cf7d4(param_2,param_3,1,1);
  puVar10 = (undefined1 *)0x80000011;
  if (iVar2 == 0) goto LAB_016cf694;
  iVar2 = FUN_016cf7d4(param_5,param_6,param_4,0);
  if (iVar2 == 0) {
    puVar10 = (undefined1 *)0x80000011;
    if ((param_4 & 0xff) == 2) {
      puVar10 = &DAT_80000013;
    }
    goto LAB_016cf694;
  }
  param_4 = param_4 & 0xff;
  uVar5 = 0;
  if (param_4 == 0) {
LAB_016cf628:
    if ((uVar5 < param_3) && (*(char *)(param_2 + uVar5) == '*')) {
      if (param_6 != 0) {
        uVar5 = uVar5 + 1;
        uVar9 = 0;
        do {
          uVar8 = uVar9 + 1;
          if ((uVar8 < param_6) && (param_5[uVar9 + 1] == '.')) {
            uVar9 = uVar9 + 1;
            goto LAB_016cf6a4;
          }
          uVar9 = uVar8;
        } while (param_6 != uVar8);
      }
    }
    else {
      uVar9 = 0;
LAB_016cf6a4:
      pbVar11 = (byte *)(param_2 + uVar5);
      iVar7 = param_3 - uVar5;
      iVar2 = 0;
      if (uVar5 <= param_3) {
        iVar2 = param_3 - uVar5;
      }
      iVar3 = uVar9 + param_3;
      uVar8 = iVar3 - uVar5;
      do {
        if (iVar2 == 0 || param_6 == uVar9) goto LAB_016cf770;
        uVar4 = (uint)(byte)param_5[uVar9];
        uVar12 = (uint)*pbVar11;
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        uVar6 = uVar12;
        if (uVar12 - 0x41 < 0x1a) {
          uVar6 = uVar12 | 0x20;
        }
        if (uVar6 != uVar4) goto LAB_016cf770;
        iVar2 = iVar2 + -1;
        pbVar11 = pbVar11 + 1;
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (uVar12 == 0x2e) {
LAB_016cf694:
        *param_1 = puVar10;
        return;
      }
      if (uVar8 == param_6) goto LAB_016cf730;
      if (param_4 != 2) {
        if ((param_6 <= uVar8) || (param_5[uVar8] != '.')) goto LAB_016cf770;
        uVar8 = iVar3 + ~uVar5 + 2;
      }
      if (uVar8 == param_6) {
LAB_016cf730:
        uVar1 = 1;
        goto LAB_016cf774;
      }
    }
  }
  else {
    if (param_4 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018af3f8);
    }
    uVar5 = 0;
    if (param_3 <= param_6) goto LAB_016cf628;
    if (param_6 == 0) goto LAB_016cf730;
    if (*param_5 == '.') {
LAB_016cf624:
      uVar5 = param_3 - param_6;
      goto LAB_016cf628;
    }
    uVar5 = param_3 + ~param_6;
    if (uVar5 >= param_3 && uVar5 != param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018af408);
    }
    if ((uVar5 < param_3) && (*(char *)(param_2 + uVar5) == '.')) goto LAB_016cf624;
  }
LAB_016cf770:
  uVar1 = 0;
LAB_016cf774:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 0x8000002d;
  return;
}

