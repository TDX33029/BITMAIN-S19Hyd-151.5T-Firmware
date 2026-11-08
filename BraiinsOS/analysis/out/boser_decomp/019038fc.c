// FUN_019038fc @ 019038fc size=368 calls_out=10 calls_in=1
// strings: 

void FUN_019038fc(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_5 == 0) {
    puVar5 = &DAT_01d24f98;
  }
  else {
    uVar6 = *param_1;
    FUN_0193a93c(&local_30,param_4);
    uVar7 = FUN_00703dd4(&local_30);
    uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar1 = (undefined4)uVar7;
    if (param_3 != 0) {
      FUN_018a7af8(&local_40,param_3);
      uVar2 = FUN_00705838(uVar6);
      uVar6 = local_3c;
      iVar3 = FUN_01b6a020(uVar2,local_3c,local_38,uVar1,uVar4,param_6,param_7,param_8,param_9,0,0);
      if (iVar3 == 1) {
        local_30 = local_40;
        uStack_2c = local_3c;
        uStack_28 = local_38;
        uVar7 = FUN_00703dd4(&local_30);
        iVar3 = (int)((ulonglong)uVar7 >> 0x20);
        FUN_007047f8(uVar1,uVar4);
        if (param_3 != iVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_013070f0(param_3,iVar3,&DAT_01d24fb8);
        }
        FUN_01bed4e2(param_2,(int)uVar7,param_3);
        FUN_007047f8((int)uVar7,param_3);
        return;
      }
      FUN_0134bd64(local_40,uVar6);
    }
    FUN_007047f8(uVar1,uVar4);
    puVar5 = &DAT_01d24fa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01d24da4,puVar5);
}

