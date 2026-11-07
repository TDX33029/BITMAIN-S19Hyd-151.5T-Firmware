// FUN_007afe00 @ 007afe00 size=480 calls_out=4 calls_in=0
// strings: advancing IoSlice beyond its lengthpaths must not contain interior null bytespath must be shorter than SUN_LEN | advancing io slices beyond their length

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_007afe00(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  char local_2c [4];
  uint local_28;
  
  if (param_4 != 0) {
    iVar4 = param_4 * 8;
    uVar2 = iVar4 - 8;
    uVar3 = 0;
    do {
      if (*(int *)(param_3 + 4 + uVar3 * 8) != 0) goto LAB_007afe4c;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + -8;
    } while (iVar4 != 0);
    uVar3 = (uVar2 >> 3) + 1;
LAB_007afe4c:
    if (param_4 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar3,param_4,param_4,&DAT_01c23c34);
    }
    if (param_4 != uVar3) {
      param_4 = param_4 - uVar3;
      piVar7 = (int *)(param_3 + uVar3 * 8);
      do {
        iVar4 = param_4 << 3;
        piVar1 = piVar7 + 1;
        do {
          piVar5 = piVar1;
          if (iVar4 == 0) {
            iVar4 = 1;
            iVar6 = 0;
            goto LAB_007afea4;
          }
          iVar6 = *piVar5;
          iVar4 = iVar4 + -8;
          piVar1 = piVar5 + 2;
        } while (iVar6 == 0);
        iVar4 = piVar5[-1];
LAB_007afea4:
        FUN_007b0154(local_2c,param_2,iVar4,iVar6);
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
        iVar4 = param_4 << 3;
        uVar3 = 0;
        uVar2 = local_28;
        do {
          uVar8 = (piVar7 + 1)[uVar3 * 2];
          if (uVar2 < uVar8) goto LAB_007afef8;
          uVar2 = uVar2 - uVar8;
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + -8;
        } while (iVar4 != 0);
        uVar3 = (param_4 * 8 - 8 >> 3) + 1;
LAB_007afef8:
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
        piVar7 = piVar7 + uVar3 * 2;
        if ((uint)piVar7[1] < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("advancing IoSlice beyond its lengthpaths must not contain interior null bytespath must be shorter than SUN_LEN"
                       ,0x47,&DAT_01c23c24);
        }
        param_4 = param_4 - uVar3;
        *piVar7 = *piVar7 + uVar2;
        piVar7[1] = piVar7[1] - uVar2;
        if (local_2c[0] != '\x04') {
          FUN_0069d8a4(local_2c[0],local_28);
        }
      } while( true );
    }
  }
  *(undefined1 *)param_1 = 4;
  return;
}

