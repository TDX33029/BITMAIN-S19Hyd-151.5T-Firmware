// FUN_0180ae2c @ 0180ae2c size=244 calls_out=5 calls_in=1
// strings: 0  KeepAlive

int * FUN_0180ae2c(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_48;
  char *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  puVar5 = (uint *)(param_1 + 0x60);
  uVar1 = *puVar5;
  if ((uint)-*(int *)(param_1 + 100) < (uint)(uVar1 < 2)) {
    if ((uVar1 & 1) == 0) {
      local_3c = 0;
      local_40 = 5;
      local_44 = "0\r\n\r\nKeepAlive";
      local_48 = 3;
      FUN_01779408(param_1 + 0xa8,&local_48,1 - uVar1);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x68);
      iVar7 = *(int *)(param_1 + 0x6c);
      if (iVar6 != 0 || iVar7 != 0) {
        *puVar5 = 5;
        *(undefined4 *)(param_1 + 100) = 0;
        piVar2 = (int *)FUN_0143b8e8(1,1);
        piVar3 = (int *)thunk_FUN_01be5118(8);
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,8);
        }
        iVar4 = *piVar2;
        *piVar3 = iVar6;
        piVar3[1] = iVar7;
        if (iVar4 != 0) {
          FUN_01443048(iVar4,piVar2[1]);
        }
        *piVar2 = (int)piVar3;
        piVar2[1] = (int)&DAT_01d1bfe8;
        return piVar2;
      }
    }
    uVar1 = 4;
    if (*(char *)(param_1 + 0x70) != '\0') {
      uVar1 = 5;
    }
    *puVar5 = uVar1;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return (int *)0x0;
}

