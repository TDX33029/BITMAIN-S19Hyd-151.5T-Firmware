// FUN_014f9820 @ 014f9820 size=136 calls_out=2 calls_in=2
// strings: 

void FUN_014f9820(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 local_1c;
  
  uVar4 = *(undefined4 *)(param_2 + 8);
  iVar3 = 0;
  local_1c = 0;
  while (((iVar3 == 0 ||
          (uVar5 = FUN_014f96bc(param_2), uVar1 = (int)((ulonglong)uVar5 >> 0x20),
          (int)uVar5 == 0x2e)) &&
         (uVar6 = FUN_014f9708(param_2,10,3,0x100), uVar1 = (int)(uVar6 >> 0x20), (uVar6 & 1) != 0))
        ) {
    *(char *)((int)&local_1c + iVar3) = (char)(uVar6 >> 0x20);
    iVar3 = iVar3 + 1;
    if (iVar3 == 4) {
      uVar2 = 1;
LAB_014f9898:
      *(undefined4 *)(param_1 + 1) = local_1c;
      *param_1 = uVar2;
      return;
    }
  }
  local_1c = uVar1;
  uVar2 = 0;
  *(undefined4 *)(param_2 + 8) = uVar4;
  goto LAB_014f9898;
}

