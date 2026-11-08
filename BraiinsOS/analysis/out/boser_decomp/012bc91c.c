// FUN_012bc91c @ 012bc91c size=180 calls_out=3 calls_in=4
// strings: 

int FUN_012bc91c(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char local_34 [16];
  
  local_70 = *param_2;
  local_6c = param_2[1];
  uStack_68 = param_2[2];
  uStack_64 = param_2[3];
  uStack_60 = param_2[4];
  local_5c = param_2[5];
  uStack_58 = param_2[6];
  uStack_54 = param_2[7];
  uStack_50 = param_2[8];
  uStack_4c = param_2[9];
  local_48 = param_2[10];
  uStack_44 = param_2[0xb];
  uStack_40 = param_2[0xc];
  uStack_3c = param_2[0xd];
  uStack_38 = param_2[0xe];
  iVar3 = 1;
  puVar2 = &local_70;
  do {
    if (*(char *)(puVar2 + 1) == '\a') goto LAB_012bc9b0;
    local_34[0] = *(char *)(puVar2 + 1);
    uVar1 = *(undefined1 *)puVar2;
    FUN_01bed4e2((uint)local_34 | 1,(undefined1 *)((int)puVar2 + 5),0xf);
    FUN_012b177c(param_1 + 0x10,uVar1,local_34);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 5;
  } while (iVar3 != 4);
  iVar3 = 3;
LAB_012bc9b0:
  FUN_012b97ec(&local_70,iVar3,3);
  return param_1;
}

