// FUN_01420e30 @ 01420e30 size=116 calls_out=2 calls_in=2
// strings: 

void FUN_01420e30(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  
  FUN_019ac130(&local_28,0);
  uVar3 = *param_1;
  uVar2 = param_1[1];
  bVar1 = (int)(uVar2 - (uStack_24 + (uVar3 < local_28))) < 0 !=
          (SBORROW4(uVar2,uStack_24) != SBORROW4(uVar2 - uStack_24,(uint)(uVar3 < local_28)));
  if (local_28 == uVar3 && uStack_24 == uVar2) {
    bVar1 = param_1[2] < uStack_20;
  }
  if (bVar1) {
    FUN_014208b4(param_1,uVar3 - local_28,local_28,uStack_24,uStack_20);
  }
  return;
}

