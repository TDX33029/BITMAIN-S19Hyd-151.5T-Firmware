// FUN_0126eb40 @ 0126eb40 size=684 calls_out=10 calls_in=2
// strings: title | description | default | minimum | maximumconditional_messageevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:566 | x-documentationUrl

void FUN_0126eb40(undefined1 *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar3 = *(int *)(param_2 + 0x60);
  local_58 = 0x80000000;
  iVar4 = *(int *)(param_2 + 0x94);
  iVar5 = *(int *)(param_2 + 0x88);
  local_5c = 0;
  local_64 = 0;
  local_68 = 0;
  iVar6 = *(int *)(param_2 + 0x7c);
  iVar7 = *(int *)(param_2 + 0x70);
  iVar8 = *(int *)(param_2 + 0xc0);
  cVar1 = param_2[0x18];
  cVar2 = *param_2;
  iVar9 = FUN_012727e0(&local_68,&DAT_0056df8c,param_2[0xc4]);
  if (((((((((iVar9 == 0) &&
            (iVar9 = FUN_01271f48(&local_68,"title",5,*(undefined4 *)(param_2 + 0xa4),
                                  *(undefined4 *)(param_2 + 0xa8)), iVar9 == 0)) &&
           (iVar9 = FUN_01271f48(&local_68,"description",0xb,*(undefined4 *)(param_2 + 0xb0),
                                 *(undefined4 *)(param_2 + 0xb4)), iVar9 == 0)) &&
          (iVar9 = FUN_01272118(&local_68,"default",7,param_2 + 0x30), iVar9 == 0)) &&
         (((cVar2 == '\x06' || (iVar9 = FUN_01272688(&local_68,"minimum",param_2), iVar9 == 0)) &&
          ((cVar1 == '\x06' ||
           (iVar9 = FUN_01272688(&local_68,
                                 "maximumconditional_messageevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:566"
                                 ,param_2 + 0x18), iVar9 == 0)))))) &&
        ((iVar8 == 0 ||
         (iVar9 = FUN_0127217c(&local_68,&DAT_0056cb60,4,*(undefined4 *)(param_2 + 0xbc),iVar8),
         iVar9 == 0)))) &&
       ((iVar9 = FUN_0127247c(&local_68,&DAT_00570720,param_2[0xc5]), iVar9 == 0 &&
        (((iVar7 == -0x80000000 ||
          (iVar9 = FUN_01272340(&local_68,"x-documentationUrl",0x12,param_2 + 0x70), iVar9 == 0)) &&
         ((iVar6 == -0x80000000 ||
          (iVar9 = FUN_01272340(&local_68,"x-unit",6,param_2 + 0x7c), iVar9 == 0)))))))) &&
      (((iVar5 == -0x80000000 ||
        (iVar9 = FUN_01272340(&local_68,"x-category",10,param_2 + 0x88), iVar9 == 0)) &&
       ((iVar4 == -0x80000000 ||
        (iVar9 = FUN_01272340(&local_68,"x-minVersion",0xc,param_2 + 0x94), iVar9 == 0)))))) &&
     ((iVar3 == -0x80000000 || (iVar9 = FUN_01271fb4(&local_68,param_2 + 0x48), iVar9 == 0)))) {
    local_48 = local_68;
    uStack_44 = local_64;
    uStack_40 = uStack_60;
    uStack_3c = local_5c;
    uStack_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    FUN_0196ac88(param_1);
    return;
  }
  *(int *)(param_1 + 4) = iVar9;
  *param_1 = 6;
  FUN_0126ee34(&local_68);
  return;
}

