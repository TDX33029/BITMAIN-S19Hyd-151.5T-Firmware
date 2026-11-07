// FUN_01606284 @ 01606284 size=432 calls_out=3 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x016063cc) */

void FUN_01606284(undefined1 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  pbVar5 = param_2;
LAB_016062c4:
  do {
    if (pbVar5 == param_2 + param_3) {
LAB_016063d0:
      *param_1 = 0x33;
      return;
    }
    puVar8 = (undefined1 *)(uint)*pbVar5;
    pbVar4 = pbVar5 + 1;
    if ((uint)(int)(char)*pbVar5 < 0x80000000) {
joined_r0x01606348:
      pbVar5 = pbVar4;
      puVar7 = puVar8 + -0x2b;
      if ((undefined1 *)0x3 < puVar7) goto LAB_0160638c;
LAB_0160634c:
      bVar2 = true;
      if (puVar7 == (undefined1 *)0x1) goto LAB_0160638c;
LAB_01606358:
      bVar1 = (&DAT_004164c0)[(int)puVar8];
      if (bVar2) goto LAB_016062c4;
    }
    else {
      if (puVar8 < (undefined1 *)0xe0) {
        puVar8 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar8 & 0x1f) << 6);
        pbVar4 = pbVar5 + 2;
        goto joined_r0x01606348;
      }
      uVar6 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
      if (puVar8 < (undefined1 *)0xf0) {
        puVar8 = (undefined1 *)(uVar6 | ((uint)puVar8 & 0x1f) << 0xc);
        pbVar4 = pbVar5 + 3;
        goto joined_r0x01606348;
      }
      puVar8 = (undefined1 *)(pbVar5[3] & 0x3f | uVar6 << 6 | ((uint)puVar8 & 7) << 0x12);
      if (puVar8 == &DAT_00110000) goto LAB_016063d0;
      pbVar5 = pbVar5 + 4;
      puVar7 = puVar8 + -0x2b;
      if (puVar7 < (undefined1 *)0x4) goto LAB_0160634c;
LAB_0160638c:
      bVar2 = false;
      if (puVar8 < (undefined1 *)0x80) goto LAB_01606358;
      pbVar4 = &DAT_0041121f;
      if (puVar8 < (undefined1 *)0xe0200) {
        pbVar4 = &DAT_00415d80 + ((uint)puVar8 >> 9);
      }
      bVar1 = (byte)(&DAT_00416540)[(((uint)puVar8 & 0x1ff) >> 3) + (uint)*pbVar4 * 0x20] >>
              ((uint)puVar8 & 7);
    }
    if ((bVar1 & 1) == 0) {
      iVar3 = thunk_FUN_016d4a50(param_3);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,param_3);
      }
      FUN_016dd1aa(iVar3,param_2,param_3);
      *(int *)(param_1 + 4) = param_3;
      *(int *)(param_1 + 8) = iVar3;
      *(int *)(param_1 + 0xc) = param_3;
      *param_1 = 0x2e;
      return;
    }
  } while( true );
}

