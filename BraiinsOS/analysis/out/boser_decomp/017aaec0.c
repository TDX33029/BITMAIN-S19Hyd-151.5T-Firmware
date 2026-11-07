// FUN_017aaec0 @ 017aaec0 size=380 calls_out=6 calls_in=2
// strings: 

void FUN_017aaec0(undefined1 *param_1,int *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  
  FUN_01933ff0(&local_38,*param_2 + 8);
  if (local_38 == 1) {
    local_28 = local_30;
    local_2c = local_34;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d1d434,&DAT_01d1d084);
  }
  iVar7 = param_2[1];
  iVar5 = param_2[2];
  uVar8 = *(uint *)(local_34 + 0x144);
  iVar2 = FUN_0139f0d0(*(undefined4 *)(local_34 + 0x18c),*(undefined4 *)(local_34 + 400),iVar7,iVar5
                      );
  cVar3 = *(byte *)(iVar2 + 0x20) - 6;
  if (*(byte *)(iVar2 + 0x20) < 6) {
    cVar3 = '\x06';
  }
  bVar9 = cVar3 == '\x05' || cVar3 == '\x03';
  if (cVar3 == '\x05' || cVar3 == '\x03') {
    bVar9 = *(char *)(iVar2 + 0x21) == '\x01';
  }
  if (bVar9) {
    iVar2 = FUN_0139f0d0(*(undefined4 *)(local_34 + 0x18c),*(undefined4 *)(local_34 + 400),iVar7,
                         iVar5);
    cVar3 = *(char *)(iVar2 + 0xe3);
    iVar2 = FUN_0139f148(*(undefined4 *)(local_34 + 0x18c),*(undefined4 *)(local_34 + 400),iVar7,
                         iVar5);
    if (cVar3 != '\0') {
      *(undefined1 *)(iVar2 + 0xe3) = 0;
      iVar2 = FUN_0139f0d0(*(undefined4 *)(local_34 + 0x18c),*(undefined4 *)(local_34 + 400),iVar7,
                           iVar5);
      uVar4 = *(uint *)(iVar2 + 0x3c);
      uVar6 = *(uint *)(iVar2 + 0xd8);
      FUN_00a97e8c(local_34,local_30);
      *param_1 = 5;
      uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
      if (uVar8 < uVar4) {
        uVar4 = uVar8;
      }
      iVar2 = 0;
      if (uVar6 <= uVar4) {
        iVar2 = uVar4 - uVar6;
      }
      *(int *)(param_1 + 4) = iVar2;
      return;
    }
    FUN_013bc270(iVar2,*param_3,param_3[1]);
    FUN_00a97e8c(local_34,local_30);
    uVar1 = 7;
  }
  else {
    FUN_00a97e8c(local_34,local_30);
    uVar1 = 6;
  }
  *param_1 = uVar1;
  return;
}

