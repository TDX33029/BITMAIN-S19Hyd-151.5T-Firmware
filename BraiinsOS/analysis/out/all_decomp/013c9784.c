// FUN_013c9784 @ 013c9784 size=692 calls_out=2 calls_in=0
// strings: 

int FUN_013c9784(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (param_3 < uVar2) {
    iVar5 = *(int *)(param_1 + 4);
    uVar6 = (uint)*(byte *)(param_1 + (param_4 & 0xff) + 0x2c);
    if (param_2 != 0) {
      uVar1 = *(uint *)(iVar5 + param_3 * 4);
      if ((uVar1 & 0xff) == 0xff) {
        uVar1 = uVar6 + 2 + param_3;
        if (uVar1 < uVar2) {
          iVar4 = *(int *)(iVar5 + uVar1 * 4);
          iVar5 = 0;
          if (iVar4 != 1) {
            iVar5 = iVar4;
          }
          return iVar5;
        }
LAB_013c9a20:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar1,uVar2,&DAT_018947c8);
      }
      if ((uVar1 & 0xff) == 0xfe) {
        if (uVar6 != (uVar1 & 0xffff) >> 8) {
          return 0;
        }
LAB_013c97d8:
        param_3 = param_3 + 2;
        if (uVar2 <= param_3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(param_3,uVar2,&DAT_018947b8);
        }
      }
      else {
        uVar7 = (uVar1 & 0xff) >> 2;
        if ((uVar1 & 3) != 0) {
          uVar7 = uVar7 + 1;
        }
        uVar1 = param_3 + 2;
        if (uVar2 < uVar1) {
LAB_013c99f0:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_018947a8);
        }
        uVar8 = uVar2 - uVar1;
        if (uVar8 < uVar7) {
LAB_013c99d8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar7,uVar8,&DAT_01894798);
        }
        iVar4 = uVar7 << 2;
        iVar3 = 0;
        do {
          if (iVar4 == 0) {
            return 0;
          }
          uVar8 = *(uint *)(iVar5 + uVar1 * 4 + iVar3 * 4);
          if (uVar6 == (uVar8 & 0xff)) goto LAB_013c9978;
          if (uVar6 == (uVar8 & 0xffff) >> 8) goto LAB_013c9994;
          if (uVar6 == (uVar8 & 0xffffff) >> 0x10) goto LAB_013c99b4;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -4;
        } while (uVar6 != uVar8 >> 0x18);
LAB_013c9954:
        param_3 = uVar7 + uVar1 + (iVar3 + -1) * 4 + 3;
        if (uVar2 <= param_3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(param_3,uVar2,&DAT_01894758);
        }
      }
      goto LAB_013c99c8;
    }
    do {
      uVar1 = *(uint *)(iVar5 + param_3 * 4);
      if ((uVar1 & 0xff) == 0xfe) {
        if (uVar6 == (uVar1 & 0xffff) >> 8) goto LAB_013c97d8;
      }
      else if ((uVar1 & 0xff) == 0xff) {
        uVar1 = uVar6 + 2 + param_3;
        if (uVar2 <= uVar1) goto LAB_013c9a20;
        iVar4 = *(int *)(iVar5 + uVar1 * 4);
        if (iVar4 != 1) {
          return iVar4;
        }
      }
      else {
        uVar7 = (uVar1 & 0xff) >> 2;
        if ((uVar1 & 3) != 0) {
          uVar7 = uVar7 + 1;
        }
        uVar1 = param_3 + 2;
        if (uVar2 < uVar1) goto LAB_013c99f0;
        uVar8 = uVar2 - uVar1;
        if (uVar8 < uVar7) goto LAB_013c99d8;
        iVar4 = uVar7 << 2;
        iVar3 = 0;
        while (iVar4 != 0) {
          uVar8 = *(uint *)(iVar5 + uVar1 * 4 + iVar3 * 4);
          if (uVar6 == (uVar8 & 0xff)) goto LAB_013c9978;
          if (uVar6 == (uVar8 & 0xffff) >> 8) goto LAB_013c9994;
          if (uVar6 == (uVar8 & 0xffffff) >> 0x10) goto LAB_013c99b4;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -4;
          if (uVar6 == uVar8 >> 0x18) goto LAB_013c9954;
        }
      }
      param_3 = param_3 + 1;
      if (uVar2 <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(param_3,uVar2,&DAT_018947d8);
      }
      param_3 = *(uint *)(iVar5 + param_3 * 4);
    } while (param_3 < uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(param_3,uVar2,&DAT_01894748);
LAB_013c9978:
  param_3 = uVar7 + uVar1 + iVar3 * 4;
  if (uVar2 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,uVar2,&DAT_01894788);
  }
  goto LAB_013c99c8;
LAB_013c9994:
  param_3 = uVar7 + uVar1 + iVar3 * 4 + 1;
  if (uVar2 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,uVar2,&DAT_01894778);
  }
  goto LAB_013c99c8;
LAB_013c99b4:
  param_3 = uVar7 + uVar1 + iVar3 * 4 + 2;
  if (uVar2 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,uVar2,&DAT_01894768);
  }
LAB_013c99c8:
  return *(int *)(iVar5 + param_3 * 4);
}

