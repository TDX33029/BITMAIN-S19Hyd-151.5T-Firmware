// FUN_013f4d28 @ 013f4d28 size=172 calls_out=1 calls_in=13
// strings: 

void FUN_013f4d28(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  if ((char)param_2[7] == '\x01') {
    puVar3 = (uint *)param_2[4];
  }
  else {
    uVar4 = 0;
    uVar2 = param_2[1] - 1;
    if (uVar2 <= (uint)param_2[6]) goto LAB_013f4db8;
    iVar1 = param_2[6] + 1;
    param_2[6] = iVar1;
    uVar2 = param_2[5] + iVar1 & uVar2;
    if (param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,0,&DAT_01cf3510);
    }
    param_2[3] = uVar2;
    puVar3 = (uint *)(*param_2 + uVar2 * 4);
    param_2[4] = (int)puVar3;
  }
  *(undefined1 *)(param_2 + 7) = 0;
  uVar2 = *puVar3;
  if ((uVar2 & 1) == 0) {
    iVar1 = param_2[3];
    param_1[1] = puVar3;
    uVar4 = 1;
    param_1[2] = iVar1;
    param_1[3] = uVar2;
  }
  else {
    param_1[1] = 0;
    uVar4 = 1;
  }
LAB_013f4db8:
  *param_1 = uVar4;
  return;
}

