// FUN_01a68e2c @ 01a68e2c size=152 calls_out=3 calls_in=64
// strings: 

void FUN_01a68e2c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_98 [100];
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  char local_24;
  
  FUN_01bed4e2(auStack_98,&DAT_01d2cd30,0x60);
  iVar4 = 0;
  do {
    FUN_0141d7f4(&local_34,param_2,auStack_98 + iVar4);
    if (local_24 != '\x02') {
      (**(code **)(local_34 + 0x10))(auStack_28,uStack_30,uStack_2c);
    }
    iVar4 = iVar4 + 0x10;
  } while (iVar4 != 0x60);
  FUN_01a68ef0(auStack_98);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar5 = param_2[4];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar5;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  uVar5 = param_2[9];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = uVar5;
  uVar1 = param_2[0xb];
  uVar2 = param_2[0xc];
  uVar3 = param_2[0xd];
  uVar5 = param_2[0xe];
  uVar6 = param_2[0xf];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  return;
}

