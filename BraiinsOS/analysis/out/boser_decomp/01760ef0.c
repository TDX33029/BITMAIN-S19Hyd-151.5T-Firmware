// FUN_01760ef0 @ 01760ef0 size=292 calls_out=6 calls_in=1
// strings: 0  KeepAlive

int * FUN_01760ef0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_4c;
  char *local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  puVar5 = (uint *)(param_1 + 0x90);
  uVar1 = *puVar5;
  if (2 < uVar1) {
    return (int *)0x0;
  }
  if (uVar1 == 0) {
    local_40 = 0;
    local_4c = 3;
    local_48 = "0\r\n\r\nKeepAlive";
    uVar6 = 5;
    local_44 = 5;
    FUN_01725c78(param_1 + 0x100,&local_4c);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      uVar6 = 6;
    }
    if (*(uint *)(param_1 + 0x90) == 2) {
      uVar6 = 6;
    }
    if (2 < *(uint *)(param_1 + 0x90)) goto LAB_01760ff8;
  }
  else {
    if (uVar1 == 1) {
      iVar7 = *(int *)(param_1 + 0x98);
      iVar8 = *(int *)(param_1 + 0x9c);
      if (iVar7 != 0 || iVar8 != 0) {
        FUN_0116c8d0(puVar5);
        *puVar5 = 6;
        piVar2 = (int *)FUN_01427b74(1,1);
        piVar3 = (int *)thunk_FUN_01be5118(8);
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,8);
        }
        iVar4 = *piVar2;
        *piVar3 = iVar7;
        piVar3[1] = iVar8;
        if (iVar4 != 0) {
          FUN_01443048(iVar4,piVar2[1]);
        }
        *piVar2 = (int)piVar3;
        piVar2[1] = (int)&DAT_01d19dc8;
        return piVar2;
      }
    }
    uVar6 = 5;
    if (*(char *)(param_1 + 0xa0) != '\0') {
      uVar6 = 6;
    }
    if (uVar1 == 2) {
      uVar6 = 6;
    }
  }
  FUN_0116c8d0(puVar5);
LAB_01760ff8:
  *puVar5 = uVar6;
  return (int *)0x0;
}

