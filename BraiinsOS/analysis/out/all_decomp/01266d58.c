// FUN_01266d58 @ 01266d58 size=264 calls_out=4 calls_in=1
// strings: 

void FUN_01266d58(undefined4 *param_1,int param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  char local_30;
  undefined3 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  
  uVar1 = (uint)*(byte *)(param_2 + 0x14);
  uVar4 = (uint)param_3;
  bVar5 = uVar1 == 1;
  if (bVar5) {
    uVar1 = (uint)*(byte *)(param_2 + 0x15);
  }
  if (!bVar5 || uVar1 != uVar4) {
    local_24 = 0x1b6;
    local_28 = 0;
    local_1c = 0;
    local_20 = 0x101;
    FUN_015ec1bc(&local_30,&local_28,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    if (local_30 != '\x04') {
      *param_1 = CONCAT31(local_2f,local_30);
      param_1[1] = local_2c;
      return;
    }
    iVar2 = FUN_016d6590(local_2c,0x703,uVar4);
    if ((iVar2 == -1) || (iVar2 = FUN_016d6590(local_2c,0x708,0), iVar2 == -1)) {
      uVar3 = FUN_0126ebd4();
      FUN_016dffb2(local_2c);
      *param_1 = 4;
      param_1[1] = uVar3;
      return;
    }
    FUN_016dffb2(*(undefined4 *)(param_2 + 0xc));
    *(undefined4 *)(param_2 + 0xc) = local_2c;
    *(uint *)(param_2 + 0x10) = uVar4;
    *(byte *)(param_2 + 0x15) = param_3;
    *(undefined1 *)(param_2 + 0x14) = 1;
  }
  *(undefined1 *)param_1 = 5;
  return;
}

