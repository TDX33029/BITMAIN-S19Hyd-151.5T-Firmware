// FUN_01584d9c @ 01584d9c size=124 calls_out=2 calls_in=1
// strings: 

void FUN_01584d9c(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined4 *)FUN_016d2bc8();
  uVar2 = 0x28;
  switch(*puVar1) {
  case 2:
  case 6:
  case 0xd:
  case 0x10:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x28:
    uVar2 = 0x2a;
    break;
  case 4:
    FUN_01584c70(param_1);
    *(undefined1 *)(param_1 + 0xc) = 0x23;
    return;
  case 0xb:
    FUN_01584c70(param_1);
    *(undefined1 *)(param_1 + 0xc) = 0xd;
    return;
  case 0x16:
  case 0x24:
    FUN_01584c70(param_1);
    *(undefined1 *)(param_1 + 0xc) = 0x2b;
    return;
  }
  FUN_01584c70(param_1);
  *(undefined1 *)(param_1 + 0xc) = uVar2;
  return;
}

