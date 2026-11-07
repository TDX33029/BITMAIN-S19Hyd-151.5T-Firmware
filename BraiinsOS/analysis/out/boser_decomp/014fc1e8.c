// FUN_014fc1e8 @ 014fc1e8 size=304 calls_out=4 calls_in=1
// strings: 

void FUN_014fc1e8(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 extraout_s1;
  double dVar7;
  int local_50;
  char *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  char **local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  code *local_2c;
  
  iVar4 = param_2[2];
  pcVar5 = (char *)param_2[1];
  pcVar3 = (char *)*param_2;
  while( true ) {
    if (pcVar3 == pcVar5) {
      *param_1 = 0x80000000;
      return;
    }
    cVar1 = *pcVar3;
    *param_2 = pcVar3 + 0x18;
    if (cVar1 != '\x02') break;
    if (*(int *)(pcVar3 + 8) == 2 && *(int *)(pcVar3 + 0xc) == 0) {
      dVar7 = *(double *)(pcVar3 + 0x10);
      uVar6 = FUN_01be6548(SUB84(dVar7,0));
      param_2[2] = iVar4 + 1;
      if (dVar7 - (double)CONCAT44(extraout_s1,uVar6) != 0.0) goto LAB_014fc280;
    }
    else {
      param_2[2] = iVar4 + 1;
    }
    iVar4 = iVar4 + 1;
    pcVar3 = pcVar3 + 0x18;
  }
  param_2[2] = iVar4 + 1;
LAB_014fc280:
  local_34 = &LAB_015388d8;
  local_38 = &local_4c;
  local_2c = FUN_012fd02c;
  local_50 = iVar4;
  local_4c = pcVar3;
  local_30 = (undefined1 *)&local_50;
  FUN_00664898(&local_48,&DAT_005867c7,&local_38);
  puVar2 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *puVar2 = 0x65707974;
  param_1[3] = local_48;
  param_1[4] = uStack_44;
  param_1[5] = uStack_40;
  *param_1 = 4;
  param_1[1] = puVar2;
  param_1[2] = 4;
  return;
}

