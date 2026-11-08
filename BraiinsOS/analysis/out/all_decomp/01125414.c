// FUN_01125414 @ 01125414 size=536 calls_out=5 calls_in=0
// strings: advancing IoSlice beyond its lengthfailed to write the buffered datapaths must not contain interior null bytespath must be shorter than SUN_LEN | advancing io slices beyond their length

void FUN_01125414(undefined4 *param_1,int *param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uStack_2c;
  uint uStack_28;
  
  if (param_4 != 0) {
    iVar4 = param_4 * 8;
    uVar2 = iVar4 - 8;
    uVar3 = 0;
    do {
      if (*(int *)(param_3 + 4 + uVar3 * 8) != 0) goto LAB_01125464;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + -8;
    } while (iVar4 != 0);
    uVar3 = (uVar2 >> 3) + 1;
LAB_01125464:
    if (param_4 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar3,param_4,param_4,&DAT_018874b0);
    }
    if (param_4 != uVar3) {
      param_4 = param_4 - uVar3;
      piVar7 = (int *)(param_3 + uVar3 * 8);
      do {
        iVar4 = param_4 << 3;
        puVar1 = (uint *)(piVar7 + 1);
        do {
          puVar5 = puVar1;
          if (iVar4 == 0) {
            uVar2 = 1;
            uVar3 = 0;
            goto LAB_011254b0;
          }
          uVar3 = *puVar5;
          iVar4 = iVar4 + -8;
          puVar1 = puVar5 + 2;
        } while (uVar3 == 0);
        uVar2 = puVar5[-1];
LAB_011254b0:
        uVar6 = param_2[1];
        uStack_28 = param_2[2] - uVar6;
        uVar8 = uVar6 ^ 0x7fffffff;
        if (uVar3 < (uVar6 ^ 0x7fffffff)) {
          uVar8 = uVar3;
        }
        if (uStack_28 < uVar8) {
          FUN_00f5f538(param_2,uVar8);
          uVar6 = param_2[1];
          uStack_28 = param_2[2] - uVar6;
        }
        FUN_016dd1aa(*param_2 + uVar6,uVar2,uVar8);
        if (uStack_28 < uVar8) {
          uStack_2c = uVar8;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&uStack_2c);
        }
        param_2[1] = uVar6 + uVar8;
        if (uVar8 == 0) {
          *param_1 = 2;
          param_1[1] = &DAT_018aeae8;
          return;
        }
        iVar4 = param_4 << 3;
        uVar3 = 0;
        do {
          uVar2 = (piVar7 + 1)[uVar3 * 2];
          if (uVar8 < uVar2) goto LAB_01125550;
          uVar8 = uVar8 - uVar2;
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + -8;
        } while (iVar4 != 0);
        uVar3 = (param_4 * 8 - 8 >> 3) + 1;
LAB_01125550:
        if (param_4 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar3,param_4,param_4,&DAT_018874b0);
        }
        if (param_4 == uVar3) {
          if (uVar8 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("advancing io slices beyond their length",0x4f,&DAT_01887490);
          }
          break;
        }
        piVar7 = piVar7 + uVar3 * 2;
        if ((uint)piVar7[1] < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("advancing IoSlice beyond its lengthfailed to write the buffered datapaths must not contain interior null bytespath must be shorter than SUN_LEN"
                       ,0x47,&DAT_018874a0);
        }
        param_4 = param_4 - uVar3;
        *piVar7 = *piVar7 + uVar8;
        piVar7[1] = piVar7[1] - uVar8;
      } while( true );
    }
  }
  *(undefined1 *)param_1 = 4;
  return;
}

