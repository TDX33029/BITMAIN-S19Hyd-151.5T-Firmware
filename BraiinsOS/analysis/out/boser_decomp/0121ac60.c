// FUN_0121ac60 @ 0121ac60 size=440 calls_out=3 calls_in=0
// strings: advancing IoSlice beyond its lengthpaths must not contain interior null bytespath must be shorter than SUN_LEN | advancing io slices beyond their length

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0121ac60(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_38 [4];
  uint local_34;
  undefined4 *local_30;
  int *local_2c;
  uint local_28;
  
  if (param_4 != 0) {
    param_2 = (undefined4 *)*param_2;
    iVar3 = param_4 * 8;
    uVar1 = iVar3 - 8;
    uVar2 = 0;
    do {
      if (*(int *)(param_3 + 4 + uVar2 * 8) != 0) goto LAB_0121acac;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -8;
    } while (iVar3 != 0);
    uVar2 = (uVar1 >> 3) + 1;
LAB_0121acac:
    if (param_4 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar2,param_4,param_4,&DAT_01c23c34);
    }
    if (param_4 != uVar2) {
      param_4 = param_4 - uVar2;
      piVar4 = (int *)(param_3 + uVar2 * 8);
      do {
        local_30 = param_2 + 2;
        local_2c = piVar4;
        local_28 = param_4;
        FUN_0120ec6c(local_38,*param_2,param_2[1],&local_30);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(local_38[0]) {
        case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (local_34 == 0) {
          *param_1 = 2;
          param_1[1] = &DAT_01d2e7b8;
          return;
        }
        iVar3 = param_4 << 3;
        uVar2 = 0;
        uVar1 = local_34;
        do {
          if (uVar1 < (uint)piVar4[uVar2 * 2 + 1]) goto LAB_0121ad48;
          uVar1 = uVar1 - piVar4[uVar2 * 2 + 1];
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + -8;
        } while (iVar3 != 0);
        uVar2 = (param_4 * 8 - 8 >> 3) + 1;
LAB_0121ad48:
        if (param_4 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar2,param_4,param_4,&DAT_01c23c34);
        }
        if (param_4 == uVar2) {
          if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("advancing io slices beyond their length",0x4f,&DAT_01c23c14);
          }
          break;
        }
        piVar4 = piVar4 + uVar2 * 2;
        if ((uint)piVar4[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("advancing IoSlice beyond its lengthpaths must not contain interior null bytespath must be shorter than SUN_LEN"
                       ,0x47,&DAT_01c23c24);
        }
        param_4 = param_4 - uVar2;
        *piVar4 = *piVar4 + uVar1;
        piVar4[1] = piVar4[1] - uVar1;
      } while( true );
    }
  }
  *(undefined1 *)param_1 = 4;
  return;
}

