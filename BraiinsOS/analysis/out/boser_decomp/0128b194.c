// FUN_0128b194 @ 0128b194 size=280 calls_out=0 calls_in=1
// strings: 

void FUN_0128b194(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  bool bVar5;
  
  if (*(int *)(param_2 + 0x78) == 1) {
    if (*(uint *)(param_2 + 0x7c) < 2) {
      if (*(int *)(param_2 + 0x80) != 1) goto LAB_0128b274;
      if (*(uint *)(param_2 + 0x84) < 0xc) {
        if (*(int *)(param_2 + 0x88) == 1) {
          if (*(uint *)(param_2 + 0x8c) < 0x3c) {
            uVar3 = *(uint *)(param_2 + 0x94);
            puVar2 = (undefined1 *)0x0;
            if (*(int *)(param_2 + 0x90) == 0) {
              uVar3 = 0;
            }
            puVar4 = (undefined1 *)0x0;
            if (0x3b < uVar3) {
              if (uVar3 != 0x3c) goto LAB_0128b298;
              puVar4 = &DAT_3b9aca00;
              uVar3 = 0x3b;
            }
            if (*(int *)(param_2 + 0x98) == 1) {
              puVar2 = *(undefined1 **)(param_2 + 0x9c);
              if (&DAT_3b9ac9ff < puVar2) goto LAB_0128b298;
              if (*(int *)(param_2 + 0x90) == 0) goto LAB_0128b290;
            }
            puVar2 = puVar2 + (int)puVar4;
            bVar5 = 0x3a < uVar3;
            if (uVar3 != 0x3b) {
              bVar5 = &DAT_3b9ac9fe < puVar2;
            }
            if (!(bVar5 && (uVar3 != 0x3b && puVar2 != &DAT_3b9ac9ff))) {
              *(uint *)(param_1 + 4) =
                   (*(uint *)(param_2 + 0x84) + *(uint *)(param_2 + 0x7c) * 0xc) * 0xe10 +
                   *(uint *)(param_2 + 0x8c) * 0x3c + uVar3;
              *(undefined1 **)(param_1 + 8) = puVar2;
              uVar1 = 0;
              goto LAB_0128b288;
            }
          }
LAB_0128b298:
          uVar1 = 0;
        }
        else {
LAB_0128b290:
          uVar1 = 2;
        }
        param_1[1] = uVar1;
        uVar1 = 1;
        goto LAB_0128b288;
      }
    }
    uVar1 = 0;
  }
  else {
LAB_0128b274:
    uVar1 = 2;
  }
  param_1[1] = uVar1;
  uVar1 = 1;
LAB_0128b288:
  *param_1 = uVar1;
  return;
}

