// FUN_015f7b04 @ 015f7b04 size=180 calls_out=4 calls_in=3
// strings: 

void FUN_015f7b04(undefined4 *param_1,undefined2 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined2 uStack_3e;
  undefined2 local_34;
  ushort local_32;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uStack_3e = (undefined2)param_3;
  iVar1 = FUN_01be9c4e(2,0x80002,0,param_4,param_2,(short)(param_3 >> 0x10));
  if (iVar1 == -1) {
    puVar3 = (undefined4 *)FUN_01be3244();
    uVar4 = *puVar3;
  }
  else {
    local_30 = CONCAT22(uStack_3e,param_2);
    local_32 = (ushort)((param_3 >> 0x10 & 0xff) << 8) | (ushort)(byte)(param_3 >> 0x18);
    local_28 = 0;
    local_2c = 0;
    local_34 = 2;
    iVar2 = FUN_01be718e(iVar1,&local_34,0x10);
    if (iVar2 != -1) {
      param_1[1] = iVar1;
      *(undefined1 *)param_1 = 4;
      return;
    }
    puVar3 = (undefined4 *)FUN_01be3244();
    uVar4 = *puVar3;
    FUN_01bf01d6(iVar1);
  }
  *param_1 = 0;
  param_1[1] = uVar4;
  return;
}

