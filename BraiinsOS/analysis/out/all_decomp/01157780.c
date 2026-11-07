// FUN_01157780 @ 01157780 size=312 calls_out=4 calls_in=1
// strings: 

void FUN_01157780(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 extraout_s1;
  double dVar8;
  int local_50;
  char *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  char **local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  
  iVar5 = param_2[2];
  pcVar6 = (char *)param_2[1];
  pcVar4 = (char *)*param_2;
  while( true ) {
    if (pcVar4 == pcVar6) {
      *param_1 = 0x80000000;
      return;
    }
    cVar1 = *pcVar4;
    *param_2 = pcVar4 + 0x18;
    if (cVar1 != '\x02') break;
    uVar3 = *(uint *)(pcVar4 + 0xc);
    if (uVar3 == 0 && (1 < *(uint *)(pcVar4 + 8)) <= uVar3) {
      param_2[2] = iVar5 + 1;
    }
    else {
      dVar8 = *(double *)(pcVar4 + 0x10);
      uVar7 = FUN_016d62a0(SUB84(dVar8,0),uVar3 - (1 >= *(uint *)(pcVar4 + 8)));
      param_2[2] = iVar5 + 1;
      if (dVar8 - (double)CONCAT44(extraout_s1,uVar7) != 0.0) goto LAB_01157820;
    }
    iVar5 = iVar5 + 1;
    pcVar4 = pcVar4 + 0x18;
  }
  param_2[2] = iVar5 + 1;
LAB_01157820:
  local_34 = &LAB_011f23f8;
  local_38 = &local_4c;
  local_2c = &LAB_00fac484;
  local_50 = iVar5;
  local_4c = pcVar4;
  local_30 = (undefined1 *)&local_50;
  FUN_00600d2c(&local_48,&DAT_00584e4c,&local_38);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  *param_1 = 4;
  param_1[1] = puVar2;
  param_1[2] = 4;
  *puVar2 = 0x65707974;
  param_1[3] = local_48;
  param_1[4] = uStack_44;
  param_1[5] = uStack_40;
  return;
}

