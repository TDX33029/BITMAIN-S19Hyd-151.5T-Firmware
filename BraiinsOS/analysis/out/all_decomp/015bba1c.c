// FUN_015bba1c @ 015bba1c size=288 calls_out=1 calls_in=1
// strings: 

void FUN_015bba1c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  if (param_3 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    puVar2 = (undefined1 *)(param_2 + iVar1);
    local_25 = *puVar2;
    local_28 = puVar2[3];
    local_2f = puVar2[10];
    local_33 = puVar2[0xe];
    local_26 = puVar2[1];
    local_2a = puVar2[5];
    local_27 = puVar2[2];
    local_29 = puVar2[4];
    local_2b = puVar2[6];
    local_2c = puVar2[7];
    local_2d = puVar2[8];
    local_2e = puVar2[9];
    local_30 = puVar2[0xb];
    local_34 = puVar2[0xf];
    local_32 = puVar2[0xd];
    local_31 = puVar2[0xc];
    FUN_01287ea0(param_1,&local_34);
    iVar1 = iVar1 + 0x10;
  } while (param_3 << 4 != iVar1);
  return;
}

