// FUN_018bd8d8 @ 018bd8d8 size=168 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_018bd8d8(short *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  short *psVar5;
  undefined4 uVar6;
  int *piVar7;
  
  puVar3 = (undefined4 *)0x0;
  if (param_3 != 0) {
    psVar5 = (short *)(param_2 + 2);
    param_3 = param_3 << 2;
    do {
      if ((psVar5[-1] == *param_1) && ((*param_1 != 0xd || (*psVar5 == param_1[1])))) {
        piVar7 = *(int **)(param_1 + 2);
        do {
          iVar4 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar4 + 1;
        if (iVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x18bd97c);
          (*pcVar1)();
        }
        uVar6 = *(undefined4 *)param_1;
        puVar3 = (undefined4 *)thunk_FUN_01be5118(8);
        if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        *puVar3 = uVar6;
        puVar3[1] = piVar7;
        break;
      }
      psVar5 = psVar5 + 2;
      param_3 = param_3 + -4;
    } while (param_3 != 0);
  }
  return CONCAT44(&UNK_01d2285c,puVar3);
}

