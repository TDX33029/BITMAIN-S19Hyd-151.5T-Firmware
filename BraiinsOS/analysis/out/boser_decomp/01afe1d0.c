// FUN_01afe1d0 @ 01afe1d0 size=344 calls_out=6 calls_in=1
// strings: 

void FUN_01afe1d0(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  int local_30;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [8];
  uint local_1c [2];
  
  local_1c[0] = DAT_01d53560;
  uVar10 = FUN_01afddc0(param_1,auStack_2c,2,0);
  uVar8 = (uint)((ulonglong)uVar10 >> 0x20);
  if ((int)uVar10 != 0) {
    uVar10 = FUN_01afe0dc(auStack_2c,&local_30);
    uVar8 = (uint)((ulonglong)uVar10 >> 0x20);
    if ((int)uVar10 != 0) {
      iVar3 = FUN_01afd674(auStack_2c);
      uVar10 = FUN_01afd684(auStack_2c);
      uVar8 = (uint)((ulonglong)uVar10 >> 0x20);
      uVar4 = (uint)uVar10;
      if (uVar4 < 9) {
        uVar2 = 0;
        if (local_30 != 0) {
          uVar2 = 0xff;
        }
        puVar5 = (uint *)FUN_01bed93e(auStack_24,uVar2,8);
        puVar6 = (undefined1 *)(iVar3 + uVar4);
        uVar8 = 0;
        puVar7 = puVar5;
        while( true ) {
          bVar9 = 7 < uVar8;
          if (uVar8 != 8) {
            bVar9 = uVar4 <= uVar8;
          }
          if (bVar9) break;
          puVar6 = puVar6 + -1;
          uVar8 = uVar8 + 1;
          *(undefined1 *)puVar7 = *puVar6;
          puVar7 = (uint *)((int)puVar7 + 1);
        }
        if (((param_2 < puVar5) && (puVar5 < param_2 + 2)) ||
           (puVar5 < param_2 && param_2 < local_1c)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0,0x1afe2e4);
          (*pcVar1)();
        }
        uVar8 = puVar5[1];
        *param_2 = *puVar5;
        param_2[1] = uVar8;
        uVar2 = 1;
        goto LAB_01afe220;
      }
    }
  }
  uVar2 = 0;
LAB_01afe220:
  if ((local_1c[0] ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar8,local_1c[0] ^ DAT_01d53560,0);
  }
  return;
}

