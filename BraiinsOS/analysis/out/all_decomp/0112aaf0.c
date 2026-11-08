// FUN_0112aaf0 @ 0112aaf0 size=160 calls_out=3 calls_in=1
// strings: 

void FUN_0112aaf0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_8c [20];
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_78 = 0x10;
  puVar1 = (undefined4 *)((uint)&local_78 | 4);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar1[4] = param_3[4];
  puVar1[5] = uVar2;
  puVar1[6] = uVar3;
  puVar1[7] = uVar4;
  uVar2 = param_3[9];
  uVar3 = param_3[10];
  uVar4 = param_3[0xb];
  uVar5 = param_3[0xc];
  puVar1[8] = param_3[8];
  puVar1[9] = uVar2;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar4;
  puVar1[0xc] = uVar5;
  FUN_0161cae8(auStack_8c);
  FUN_01134840(&local_78,param_2 + 0x1b0,auStack_8c);
  uVar2 = 0x11;
  if (local_78 != -0x80000000) {
    local_38 = local_78;
    uStack_34 = uStack_74;
    uStack_30 = uStack_70;
    uStack_2c = uStack_6c;
    uStack_28 = uStack_68;
    uStack_24 = uStack_64;
    FUN_011330d8(param_1 + 1);
    uVar2 = 0xb;
  }
  *param_1 = uVar2;
  return;
}

