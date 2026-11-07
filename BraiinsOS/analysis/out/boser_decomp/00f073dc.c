// FUN_00f073dc @ 00f073dc size=292 calls_out=2 calls_in=1
// strings: 

void FUN_00f073dc(char param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte local_1a;
  char local_19;
  
  local_1a = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_1a,1);
  uVar3 = *param_2;
  cVar2 = '\0';
  cVar1 = '\0';
  if (uVar3 != 0) {
    cVar2 = (char)((LZCOUNT(uVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
  }
  uVar4 = param_2[1];
  if (uVar4 != 0) {
    cVar1 = (char)((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
  }
  uVar5 = param_2[2];
  if (uVar5 == 0) {
    local_19 = '\0';
  }
  else {
    local_19 = (char)((LZCOUNT(uVar5 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
  }
  local_19 = cVar1 + cVar2 + local_19;
  FUN_01284394(param_3,&local_19,1);
  if (uVar3 != 0) {
    FUN_00efc9fc(1,uVar3,param_3);
  }
  if (uVar4 != 0) {
    FUN_00efc9fc(2,uVar4,param_3);
  }
  if (uVar5 == 0) {
    return;
  }
  FUN_00efc9fc(3,uVar5,param_3);
  return;
}

