// FUN_0123ec50 @ 0123ec50 size=244 calls_out=2 calls_in=2
// strings: 

void FUN_0123ec50(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  uVar3 = *(uint *)(param_2 + 0x14);
  if (uVar3 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar4 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar3);
      uVar5 = uVar4 - 9;
      if ((0x17 < uVar5) || ((1 << (uVar5 & 0xff) & 0x800013U) == 0)) {
        if (uVar4 == 0x6e) {
          *(uint *)(param_2 + 0x14) = uVar3 + 1;
          iVar2 = FUN_01964c70(param_2,"ull",3);
          if (iVar2 == 0) {
            *param_1 = 0;
            param_1[1] = 0;
            return;
          }
          *param_1 = 2;
          param_1[1] = 0;
          param_1[2] = iVar2;
          return;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(param_2 + 0x14) = uVar3;
    } while (*(uint *)(param_2 + 0x10) != uVar3);
  }
  FUN_01224810(&local_28);
  if (local_28 == 1) {
    param_1[2] = local_24;
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
    *(undefined8 *)(param_1 + 2) = local_20;
  }
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

