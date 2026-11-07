// FUN_015e8c10 @ 015e8c10 size=536 calls_out=5 calls_in=0
// strings: advancing IoSlice beyond its lengthfailed to write the buffered datapaths must not contain interior null bytespath must be shorter than SUN_LEN | advancing io slices beyond their length

/* WARNING: Removing unreachable block (ram,0x015e8d40) */
/* WARNING: Removing unreachable block (ram,0x015e8d48) */
/* WARNING: Removing unreachable block (ram,0x015e8d5c) */
/* WARNING: Removing unreachable block (ram,0x015e8d64) */
/* WARNING: Removing unreachable block (ram,0x015e8d70) */
/* WARNING: Removing unreachable block (ram,0x015e8d78) */

void FUN_015e8c10(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 local_2c [4];
  uint local_28;
  
  if (param_4 != 0) {
    iVar5 = param_4 * 8;
    uVar1 = iVar5 - 8;
    uVar2 = 0;
    do {
      if (*(int *)(param_3 + 4 + uVar2 * 8) != 0) goto LAB_015e8c5c;
      uVar2 = uVar2 + 1;
      iVar5 = iVar5 + -8;
    } while (iVar5 != 0);
    uVar2 = (uVar1 >> 3) + 1;
LAB_015e8c5c:
    if (param_4 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar2,param_4,param_4,&DAT_018aaba8);
    }
    if (param_4 != uVar2) {
      param_4 = param_4 - uVar2;
      piVar7 = (int *)(param_3 + uVar2 * 8);
      do {
        while( true ) {
          uVar2 = param_4;
          if (0x3ff < param_4) {
            uVar2 = 0x400;
          }
          uVar2 = FUN_016e0370(2,piVar7,uVar2);
          if (uVar2 == 0xffffffff) break;
          local_28 = uVar2;
          local_2c[0] = 4;
          if (uVar2 == 0) {
            puVar4 = &DAT_018aeaf8;
            goto LAB_015e8db4;
          }
          iVar5 = param_4 << 3;
          uVar1 = 0;
          do {
            if (uVar2 < (uint)piVar7[uVar1 * 2 + 1]) goto LAB_015e8d04;
            uVar2 = uVar2 - piVar7[uVar1 * 2 + 1];
            uVar1 = uVar1 + 1;
            iVar5 = iVar5 + -8;
          } while (iVar5 != 0);
          uVar1 = (param_4 * 8 - 8 >> 3) + 1;
LAB_015e8d04:
          if (param_4 < uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar1,param_4,param_4,&DAT_018aaba8);
          }
          if (param_4 == uVar1) {
            if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("advancing io slices beyond their length",0x4f,&DAT_018aab88);
            }
            goto LAB_015e8da0;
          }
          piVar7 = piVar7 + uVar1 * 2;
          if ((uint)piVar7[1] < uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("advancing IoSlice beyond its lengthfailed to write the buffered datapaths must not contain interior null bytespath must be shorter than SUN_LEN"
                         ,0x47,&DAT_018aab98);
          }
          param_4 = param_4 - uVar1;
          *piVar7 = *piVar7 + uVar2;
          piVar7[1] = piVar7[1] - uVar2;
        }
        puVar3 = (uint *)FUN_016d2bc8();
        local_2c[0] = 0;
        local_28 = *puVar3;
      } while (*puVar3 == 4);
      puVar4 = (undefined4 *)local_2c;
LAB_015e8db4:
      uVar6 = puVar4[1];
      *param_1 = *puVar4;
      param_1[1] = uVar6;
      return;
    }
  }
LAB_015e8da0:
  *(undefined1 *)param_1 = 4;
  return;
}

