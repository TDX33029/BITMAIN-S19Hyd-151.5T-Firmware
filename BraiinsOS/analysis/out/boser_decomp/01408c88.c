// FUN_01408c88 @ 01408c88 size=160 calls_out=3 calls_in=1
// strings: 

void FUN_01408c88(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  DataMemoryBarrier(0xb);
  if (param_2 != 0) {
    puVar7 = param_1 + param_2 * 2;
    do {
      uVar3 = *param_1;
      while (puVar1 = (undefined4 *)(uVar3 & 0xfffffffc), puVar1 != (undefined4 *)0x0) {
        uVar5 = puVar1[3];
        puVar6 = (uint *)*puVar1;
        for (iVar4 = puVar1[1] << 2; iVar4 != 0; iVar4 = iVar4 + -4) {
          uVar2 = *puVar6;
          if (7 < uVar2) {
            if ((uVar2 & 2) == 0) {
              FUN_013f4e60(0);
            }
            else if (uVar5 < 4) {
              DataMemoryBarrier(0xb);
              FUN_01403c00(uVar2);
            }
          }
          puVar6 = puVar6 + 1;
        }
        FUN_013f4f9c(0,uVar3);
        uVar3 = uVar5;
      }
      param_1 = param_1 + 2;
    } while (param_1 != puVar7);
  }
  return;
}

