// FUN_01240bcc @ 01240bcc size=236 calls_out=1 calls_in=2
// strings: 

void FUN_01240bcc(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = param_2[3];
  uVar2 = *param_2;
  cVar1 = *(char *)((int)param_2 + 0x19);
  if (*(char *)(param_2 + 6) == '\0') {
    if (cVar1 == '\0') {
      FUN_01240cd0(param_1,uVar2,uVar3,&DAT_003b522d,5);
      return;
    }
    FUN_01240cd0(param_1,uVar2,uVar3,&DAT_003b5232,6);
    return;
  }
  if (*(char *)(param_2 + 6) == '\x01') {
    if (cVar1 == '\0') {
      FUN_01240cd0(param_1,uVar2,uVar3,&DAT_003b5238,0x13);
      return;
    }
    FUN_01240cd0(param_1,uVar2,uVar3,&DAT_003b524b,0x14);
    return;
  }
  if (cVar1 == '\0') {
    FUN_01240cd0(param_1,uVar2,uVar3,&DAT_003b525f,0xc);
    return;
  }
  FUN_01240cd0(param_1,uVar2,uVar3,&DAT_003b526b,0xd);
  return;
}

