// FUN_00036be4 @ 00036be4  size=120  callers=1
// program: bmminer


void FUN_00036be4(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint local_13c [74];
  
  FUN_00045748(local_13c);
  FUN_00035ca8(local_13c);
  if (local_13c[0] != 0) {
    puVar3 = local_13c;
    uVar4 = 0;
    uVar1 = local_13c[0];
    do {
      if (puVar3[2] != 0) {
        puVar2 = puVar3 + 2;
        uVar1 = 0;
        do {
          puVar2 = puVar2 + 1;
          FUN_0002013c(*puVar2,1);
          uVar1 = uVar1 + 1;
        } while (uVar1 < puVar3[2]);
        uVar1 = local_13c[0];
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x12;
    } while (uVar4 < uVar1);
  }
  return;
}

