// FUN_01582628 @ 01582628 size=156 calls_out=1 calls_in=2
// strings: 

void FUN_01582628(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  cVar1 = *(char *)((int)param_2 + 0x19);
  if (*(char *)(param_2 + 6) == '\0') {
    uVar3 = 5;
    puVar4 = &DAT_004a687b;
    if (cVar1 != '\0') {
      uVar3 = 6;
    }
    puVar2 = &UNK_004a6876;
  }
  else if (*(char *)(param_2 + 6) == '\x01') {
    uVar3 = 0x13;
    puVar4 = &DAT_004a6894;
    if (cVar1 != '\0') {
      uVar3 = 0x14;
    }
    puVar2 = &DAT_004a6881;
  }
  else {
    uVar3 = 0xc;
    puVar4 = &DAT_004a68b4;
    if (cVar1 != '\0') {
      uVar3 = 0xd;
    }
    puVar2 = &UNK_004a68a8;
  }
  if (cVar1 != '\0') {
    puVar2 = puVar4;
  }
  FUN_015826dc(param_1,*param_2,param_2[3],puVar2,uVar3);
  return;
}

