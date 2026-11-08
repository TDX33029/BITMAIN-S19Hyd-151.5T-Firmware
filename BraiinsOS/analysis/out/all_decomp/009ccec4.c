// FUN_009ccec4 @ 009ccec4 size=476 calls_out=4 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x009ccfcc) */

void FUN_009ccec4(undefined4 *param_1,int param_2,uint *param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  puVar10 = (undefined4 *)(param_2 + 8);
  puVar9 = *(undefined4 **)(param_2 + 8);
  DataMemoryBarrier(0xb);
  if ((undefined4 *)puVar9[1] == (undefined4 *)0x0) {
LAB_009cd028:
    puVar8 = puVar10;
    puVar6 = puVar9;
LAB_009cd02c:
    uVar4 = 2;
    if ((undefined1 *)*puVar6 == &DAT_0041319b) {
      *param_1 = 0;
      return;
    }
LAB_009cd070:
    param_1[1] = puVar8;
    param_1[2] = puVar6;
    *param_1 = uVar4;
    return;
  }
  uVar2 = *param_3;
  puVar7 = puVar10;
  puVar5 = (undefined4 *)puVar9[1];
LAB_009ccf18:
  do {
    puVar8 = puVar5;
    puVar6 = (undefined4 *)*puVar8;
    DataMemoryBarrier(0xb);
    puVar5 = (undefined4 *)puVar6[1];
    if (((uint)puVar5 & 1) == 0) {
      bVar11 = uVar2 < *(uint *)*puVar6;
      bVar1 = !bVar11 && uVar2 != *(uint *)*puVar6;
      if ((char)(bVar1 - bVar11) != '\x01') {
        if (bVar1 != bVar11) {
          param_1[1] = puVar7;
          param_1[2] = puVar9;
          *param_1 = 2;
          return;
        }
        uVar4 = 1;
        goto LAB_009cd070;
      }
      puVar7 = puVar8;
      puVar9 = puVar6;
      if (puVar5 == (undefined4 *)0x0) goto LAB_009cd02c;
      goto LAB_009ccf18;
    }
    uVar4 = *puVar9;
    puVar3 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *puVar3 = uVar4;
    puVar3[1] = (uint)puVar5 & 0xfffffffe;
    if ((undefined4 *)*puVar7 == puVar9) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar7);
        if (bVar1) {
          *puVar7 = puVar3;
          FUN_009cd1bc(param_4,1,puVar9);
          FUN_009cd1bc(param_4,2,puVar8);
          FUN_009cd1bc(param_4,1,puVar6);
          puVar8 = puVar7;
          puVar9 = puVar3;
          puVar6 = puVar3;
          puVar5 = (undefined4 *)puVar3[1];
          if ((undefined4 *)puVar3[1] != (undefined4 *)0x0) goto LAB_009ccf18;
          goto LAB_009cd02c;
        }
      } while ((undefined4 *)*puVar7 == puVar9);
    }
    ClearExclusiveLocal();
    thunk_FUN_016d3fb4();
    puVar9 = (undefined4 *)*puVar10;
    DataMemoryBarrier(0xb);
    puVar7 = puVar10;
    puVar5 = (undefined4 *)puVar9[1];
    if ((undefined4 *)puVar9[1] == (undefined4 *)0x0) goto LAB_009cd028;
  } while( true );
}

