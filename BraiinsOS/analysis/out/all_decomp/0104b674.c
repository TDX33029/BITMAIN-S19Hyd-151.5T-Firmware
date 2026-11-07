// FUN_0104b674 @ 0104b674 size=336 calls_out=1 calls_in=1
// strings: 

void FUN_0104b674(undefined1 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar10 = *(uint *)(param_2 + 0xc);
  if (1 < uVar10) {
    puVar8 = *(undefined2 **)(param_2 + 8);
    uVar1 = *puVar8;
    *(undefined2 **)(param_2 + 8) = puVar8 + 1;
    *(uint *)(param_2 + 0xc) = uVar10 - 2;
    if (1 < uVar10 - 2) {
      uVar2 = puVar8[1];
      *(undefined2 **)(param_2 + 8) = puVar8 + 2;
      *(uint *)(param_2 + 0xc) = uVar10 - 4;
      if (1 < uVar10 - 4) {
        uVar3 = puVar8[2];
        *(undefined2 **)(param_2 + 8) = puVar8 + 3;
        *(uint *)(param_2 + 0xc) = uVar10 - 6;
        if (1 < uVar10 - 6) {
          uVar4 = puVar8[3];
          *(undefined2 **)(param_2 + 8) = puVar8 + 4;
          *(uint *)(param_2 + 0xc) = uVar10 - 8;
          if (1 < uVar10 - 8) {
            uVar5 = puVar8[4];
            *(undefined2 **)(param_2 + 8) = puVar8 + 5;
            *(uint *)(param_2 + 0xc) = uVar10 - 10;
            if (1 < uVar10 - 10) {
              uVar6 = puVar8[5];
              *(undefined2 **)(param_2 + 8) = puVar8 + 6;
              *(uint *)(param_2 + 0xc) = uVar10 - 0xc;
              if (1 < uVar10 - 0xc) {
                uVar7 = puVar8[6];
                *(undefined2 **)(param_2 + 8) = puVar8 + 7;
                *(uint *)(param_2 + 0xc) = uVar10 - 0xe;
                if (1 < uVar10 - 0xe) {
                  *(undefined2 **)(param_2 + 8) = puVar8 + 8;
                  *(uint *)(param_2 + 0xc) = uVar10 - 0x10;
                  *(undefined2 *)(param_1 + 0xd) = uVar7;
                  uVar7 = puVar8[7];
                  *(undefined2 *)(param_1 + 0xb) = uVar6;
                  *(undefined2 *)(param_1 + 9) = uVar5;
                  *(undefined2 *)(param_1 + 7) = uVar4;
                  *(undefined2 *)(param_1 + 5) = uVar3;
                  *(undefined2 *)(param_1 + 3) = uVar2;
                  *(undefined2 *)(param_1 + 1) = uVar1;
                  *param_1 = 0;
                  *(undefined2 *)(param_1 + 0xf) = uVar7;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  local_28 = 2;
  local_2c = 0;
  local_30[0] = 0;
  uVar9 = FUN_0104f1e0(local_30);
  *(undefined4 *)(param_1 + 4) = uVar9;
  *param_1 = 1;
  return;
}

