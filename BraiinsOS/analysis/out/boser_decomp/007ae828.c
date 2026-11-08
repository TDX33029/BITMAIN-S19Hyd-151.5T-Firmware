// FUN_007ae828 @ 007ae828 size=484 calls_out=3 calls_in=0
// strings: advancing IoSlice beyond its lengthpaths must not contain interior null bytespath must be shorter than SUN_LEN | advancing io slices beyond their length

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_007ae828(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  undefined4 uVar10;
  char local_2c [4];
  uint local_28;
  
  if (param_4 != 0) {
    iVar8 = param_4 * 8;
    uVar2 = iVar8 - 8;
    uVar3 = 0;
    do {
      if (*(int *)(param_3 + 4 + uVar3 * 8) != 0) goto LAB_007ae870;
      uVar3 = uVar3 + 1;
      iVar8 = iVar8 + -8;
    } while (iVar8 != 0);
    uVar3 = (uVar2 >> 3) + 1;
LAB_007ae870:
    if (param_4 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar3,param_4,param_4,&DAT_01c23c34);
    }
    if (param_4 != uVar3) {
      uVar10 = *param_2;
      param_4 = param_4 - uVar3;
      piVar6 = (int *)(param_3 + uVar3 * 8);
      pcVar9 = *(code **)(param_2[1] + 0xc);
      do {
        iVar8 = param_4 << 3;
        piVar1 = piVar6 + 1;
        do {
          piVar4 = piVar1;
          if (iVar8 == 0) {
            iVar8 = 1;
            iVar5 = 0;
            goto LAB_007ae8c8;
          }
          iVar5 = *piVar4;
          iVar8 = iVar8 + -8;
          piVar1 = piVar4 + 2;
        } while (iVar5 == 0);
        iVar8 = piVar4[-1];
LAB_007ae8c8:
        (*pcVar9)(local_2c,uVar10,iVar8,iVar5);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(local_2c[0]) {
        case '\x05':
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (local_28 == 0) {
          *param_1 = 2;
          param_1[1] = &DAT_01d2e7b8;
          return;
        }
        iVar8 = param_4 << 3;
        uVar3 = 0;
        uVar2 = local_28;
        do {
          uVar7 = (piVar6 + 1)[uVar3 * 2];
          if (uVar2 < uVar7) goto LAB_007ae924;
          uVar2 = uVar2 - uVar7;
          uVar3 = uVar3 + 1;
          iVar8 = iVar8 + -8;
        } while (iVar8 != 0);
        uVar3 = (param_4 * 8 - 8 >> 3) + 1;
LAB_007ae924:
        if (param_4 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar3,param_4,param_4,&DAT_01c23c34);
        }
        if (param_4 == uVar3) {
          if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("advancing io slices beyond their length",0x4f,&DAT_01c23c14);
          }
          break;
        }
        piVar6 = piVar6 + uVar3 * 2;
        if ((uint)piVar6[1] < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("advancing IoSlice beyond its lengthpaths must not contain interior null bytespath must be shorter than SUN_LEN"
                       ,0x47,&DAT_01c23c24);
        }
        param_4 = param_4 - uVar3;
        *piVar6 = *piVar6 + uVar2;
        piVar6[1] = piVar6[1] - uVar2;
        if (local_2c[0] != '\x04') {
          FUN_0069d8a4(local_2c[0],local_28);
        }
      } while (param_4 != 0);
    }
  }
  *(undefined1 *)param_1 = 4;
  return;
}

