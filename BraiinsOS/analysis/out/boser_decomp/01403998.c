// FUN_01403998 @ 01403998 size=552 calls_out=9 calls_in=2
// strings: 

void FUN_01403998(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int *local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  
  DataMemoryBarrier(0xb);
  if (*(char *)(param_1 + 0x20) != '\0') {
    return;
  }
  FUN_01656cb0(&local_38,param_1);
  if (local_38 == (int *)&DAT_00000001) {
    local_28 = local_30;
    local_2c = local_34;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01cf3798,&DAT_01cf3ac8);
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(param_1 + 0x20) == '\0') {
    iVar7 = *(int *)(local_34 + 0x10);
    iVar2 = local_34 + 8;
    if (iVar7 != 0) {
      uVar10 = thunk_FUN_01bee35a(iVar2,0x280);
      piVar3 = (int *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
      if ((char)piVar3[2] == '\0') {
        piVar3 = (int *)FUN_0140afe8();
      }
      iVar9 = 0;
      piVar6 = *(int **)(local_34 + 0xc);
      do {
        piVar5 = piVar6 + 3;
        iVar8 = *piVar6;
        if (*(int *)(iVar8 + 8) != *piVar3 || *(int *)(iVar8 + 0xc) != piVar3[1]) {
          piVar4 = (int *)(iVar8 + 0x14);
          if (*piVar4 == 0) {
            DataMemoryBarrier(0xb);
LAB_01403a68:
            bVar1 = (bool)hasExclusiveAccess(piVar4);
            if (!bVar1) goto code_r0x01403a74;
            *piVar4 = piVar6[1];
            DataMemoryBarrier(0xb);
            if (piVar6[2] != 0) {
              DataMemoryBarrier(0xb);
              *(int *)(iVar8 + 0x18) = piVar6[2];
            }
            DataMemoryBarrier(0xb);
            piVar3 = (int *)(*(int *)(iVar8 + 0x10) + 0x18);
            do {
              iVar7 = *piVar3;
              bVar1 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar1);
            *piVar3 = 1;
            if (iVar7 == -1) {
              FUN_01be6c3c(0xf0,piVar3,0x81,1);
            }
            FUN_0140982c(&local_38,iVar2,iVar9,&DAT_01cf3aa8);
            if (local_38 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar7 = *local_38;
                bVar1 = (bool)hasExclusiveAccess(local_38);
              } while (!bVar1);
              *local_38 = iVar7 + -1;
              if (iVar7 == 1) {
                DataMemoryBarrier(0xb);
                FUN_01319d44(local_38);
              }
            }
            break;
          }
LAB_01403a80:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        iVar9 = iVar9 + 1;
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(local_34 + 0xc) + iVar7 * 3);
    }
    FUN_01403810(iVar2);
    bVar1 = false;
    if (*(int *)(local_34 + 0x10) == 0) {
      bVar1 = *(int *)(local_34 + 0x1c) == 0;
    }
    DataMemoryBarrier(0xb);
    *(bool *)(param_1 + 0x20) = bVar1;
    DataMemoryBarrier(0xb);
  }
  FUN_00a97e8c(local_34,local_30);
  return;
code_r0x01403a74:
  if (*piVar4 != 0) goto LAB_01403a80;
  goto LAB_01403a68;
}

