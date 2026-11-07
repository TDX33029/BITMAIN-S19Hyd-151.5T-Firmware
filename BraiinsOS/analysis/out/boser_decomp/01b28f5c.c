// FUN_01b28f5c @ 01b28f5c size=320 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01b28f5c(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int local_3c [6];
  
  uVar7 = 0;
  local_3c[4] = DAT_01d53560;
  piVar5 = param_2;
  while( true ) {
    if ((uint)param_2[0x3c] < uVar7) {
      if (local_3c[4] != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return 0;
    }
    if (local_3c < piVar5 && piVar5 < local_3c + 4) break;
    piVar4 = param_1;
    do {
      if ((piVar5 < local_3c) && (local_3c < piVar5 + 4)) goto LAB_01b28fe8;
      piVar6 = piVar5;
      piVar8 = local_3c;
      do {
        iVar2 = *piVar6;
        iVar3 = piVar6[1];
        piVar6 = piVar6 + 2;
        *piVar8 = iVar2;
        piVar8[1] = iVar3;
        piVar8 = piVar8 + 2;
      } while (piVar6 != piVar5 + 4);
      piVar8 = piVar4 + 1;
      *piVar4 = local_3c[0];
      piVar4[2] = local_3c[1];
      piVar4[4] = local_3c[2];
      piVar4[6] = local_3c[3];
      piVar4 = piVar8;
    } while (piVar8 != param_1 + 2);
    uVar7 = uVar7 + 1;
    FUN_01b252ec(param_1);
    param_1 = param_1 + 8;
    piVar5 = piVar6;
  }
LAB_01b28fe8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1b28fe8);
  (*pcVar1)();
}

