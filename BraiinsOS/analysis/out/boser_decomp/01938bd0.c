// FUN_01938bd0 @ 01938bd0 size=172 calls_out=4 calls_in=3
// strings: 

void FUN_01938bd0(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char local_30 [24];
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  iVar2 = FUN_01938820(uVar4,uVar5);
  if (iVar2 == 0) {
    FUN_01bed4e2((uint)local_30 | 3,param_2,0xc);
    *param_1 = 0;
    FUN_01bed4e2(param_1 + 1,local_30,0xf);
    return;
  }
  uVar3 = *param_2;
  FUN_01938984(local_30,uVar4,uVar5);
  uVar1 = 2;
  if (local_30[0] != '\x02') {
    FUN_01bed4e2(param_1 + 1,local_30,0x11);
    uVar1 = 1;
  }
  *param_1 = uVar1;
  FUN_0134bd64(uVar3,uVar4);
  return;
}

