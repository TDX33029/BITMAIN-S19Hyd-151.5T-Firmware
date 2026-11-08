// FUN_01408000 @ 01408000 size=176 calls_out=4 calls_in=1
// strings: 

void FUN_01408000(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  DataMemoryBarrier(0xb);
  if (param_2 != 0) {
    puVar6 = param_1 + param_2 * 2;
    do {
      uVar5 = *param_1;
      while (puVar1 = (undefined4 *)(uVar5 & 0xfffffffc), puVar1 != (undefined4 *)0x0) {
        uVar4 = puVar1[3];
        puVar7 = (uint *)*puVar1;
        for (iVar3 = puVar1[1] << 2; iVar3 != 0; iVar3 = iVar3 + -4) {
          uVar2 = *puVar7;
          if (7 < uVar2) {
            if ((uVar2 & 2) == 0) {
              FUN_013f4dd8(0);
            }
            else if (uVar4 < 4) {
              uVar2 = uVar2 & 0xfffffff8;
              DataMemoryBarrier(0xb);
              FUN_019bb7e0(*(undefined4 *)(uVar2 + 0x20),*(undefined4 *)(uVar2 + 0x24));
              thunk_FUN_01be4678(uVar2);
            }
          }
          puVar7 = puVar7 + 1;
        }
        FUN_013f4f9c(0,uVar5);
        uVar5 = uVar4;
      }
      param_1 = param_1 + 2;
    } while (param_1 != puVar6);
  }
  return;
}

