// FUN_014e6fe0 @ 014e6fe0 size=148 calls_out=3 calls_in=3
// strings: 

void FUN_014e6fe0(undefined2 *param_1,byte *param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar2 = param_1;
  if (param_3 == 2) {
    puVar2 = (undefined2 *)(uint)*param_2;
  }
  if (param_3 == 2 && puVar2 == (undefined2 *)0x76) {
    if (param_2[1] == 0x32) {
      uVar1 = 0x100;
    }
    else {
      if (param_2[1] != 0x31) goto LAB_014e6ffc;
      uVar1 = 0;
    }
    *param_1 = uVar1;
  }
  else {
LAB_014e6ffc:
    FUN_006643f0(&local_1c);
    uVar3 = FUN_014dee68(local_18,local_14,&DAT_01cfa344,2);
    *(undefined1 *)param_1 = 1;
    *(undefined4 *)(param_1 + 2) = uVar3;
    if (local_1c != -0x80000000) {
      FUN_019bb7e0(local_1c,local_18);
    }
  }
  return;
}

