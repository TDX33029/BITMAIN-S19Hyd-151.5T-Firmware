// FUN_006a6b54 @ 006a6b54 size=268 calls_out=3 calls_in=1
// strings: 

void FUN_006a6b54(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  
  piVar8 = (int *)*param_2;
  puVar4 = (uint *)(piVar8 + 8);
  uVar7 = piVar8[8];
  DataMemoryBarrier(0xb);
  do {
    if (uVar7 == (piVar8[6] ^ 0x7fffffffU)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00408941,0x35,&DAT_018a4cd8);
    }
    uVar3 = *puVar4;
    if (*puVar4 == uVar7) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar4);
        if (bVar2) {
          *puVar4 = uVar7 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar8;
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = iVar5 + 1;
          if (iVar5 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x6a6c44);
            (*pcVar1)();
          }
          puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
          if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x1c);
          }
          *(undefined1 *)(puVar6 + 6) = 0;
          puVar6[4] = 0;
          *(undefined1 *)(puVar6 + 3) = 0;
          *puVar6 = 1;
          puVar6[1] = 1;
          puVar6[2] = 0;
          *(undefined1 *)(param_1 + 2) = 0;
          *param_1 = piVar8;
          param_1[1] = puVar6;
          return;
        }
        uVar3 = *puVar4;
      } while (*puVar4 == uVar7);
    }
    uVar7 = uVar3;
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while( true );
}

