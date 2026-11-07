// FUN_00977380 @ 00977380 size=360 calls_out=8 calls_in=1
// strings: {     'major': 1;     'minor': 8;     'patch': 0;     'openapi_json_file_hash': 'a7e2e384812eb659109de976a257e4e1f2c5db2d9752d346a3461b4b562d3904';     'openapi_html_file_hash': 'fa013931262d692bace9068a13c4bbd2dfadce4eb32cbd50d8d6b73a8e02cc23' } open/boser/boser/src/api/boser-rest-version.json | major | minor | patch

void FUN_00977380(undefined4 *param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_019664a4(&local_38,
               "{\n    \"major\": 1,\n    \"minor\": 8,\n    \"patch\": 0,\n    \"openapi_json_file_hash\": \"a7e2e384812eb659109de976a257e4e1f2c5db2d9752d346a3461b4b562d3904\",\n    \"openapi_html_file_hash\": \"fa013931262d692bace9068a13c4bbd2dfadce4eb32cbd50d8d6b73a8e02cc23\"\n}\nopen/boser/boser/src/api/boser-rest-version.json"
               ,0xf7);
  if ((char)local_38 == '\x06') {
    uVar7 = FUN_00977500(local_34);
    FUN_00db4764(&local_50);
                    /* WARNING: Subroutine does not return */
    FUN_01be040c(uVar7);
  }
  local_50 = local_38;
  uStack_4c = local_34;
  uStack_48 = uStack_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  pcVar2 = (char *)0x0;
  uVar5 = local_38 & 0xff;
  if (uVar5 == 5) {
    pcVar2 = (char *)FUN_0196b3a8(local_34,uStack_30,"major",5);
  }
  pcVar6 = "";
  if (pcVar2 == (char *)0x0) {
    pcVar2 = pcVar6;
  }
  bVar11 = false;
  if (*pcVar2 == '\x02') {
    bVar11 = *(int *)(pcVar2 + 8) == 0 && *(int *)(pcVar2 + 0xc) == 0;
  }
  if (bVar11) {
    uVar7 = *(undefined4 *)(pcVar2 + 0x10);
    uVar8 = *(undefined4 *)(pcVar2 + 0x14);
    pcVar2 = (char *)0x0;
    if (uVar5 == 5) {
      pcVar2 = (char *)FUN_0196b3a8(uStack_4c,uStack_48,"minor",5);
    }
    if (pcVar2 == (char *)0x0) {
      pcVar2 = pcVar6;
    }
    bVar11 = false;
    if (*pcVar2 == '\x02') {
      bVar11 = *(int *)(pcVar2 + 8) == 0 && *(int *)(pcVar2 + 0xc) == 0;
    }
    if (bVar11) {
      uVar10 = *(undefined4 *)(pcVar2 + 0x10);
      uVar9 = *(undefined4 *)(pcVar2 + 0x14);
      pcVar2 = (char *)0x0;
      if (uVar5 == 5) {
        pcVar2 = (char *)FUN_0196b3a8(uStack_4c,uStack_48,"patch",5);
      }
      if (pcVar2 != (char *)0x0) {
        pcVar6 = pcVar2;
      }
      bVar11 = false;
      if (*pcVar6 == '\x02') {
        bVar11 = *(int *)(pcVar6 + 8) == 0 && *(int *)(pcVar6 + 0xc) == 0;
      }
      if (bVar11) {
        uVar3 = *(undefined4 *)(pcVar6 + 0x10);
        uVar4 = *(undefined4 *)(pcVar6 + 0x14);
        *param_1 = uVar7;
        param_1[1] = uVar8;
        param_1[2] = uVar10;
        param_1[3] = uVar9;
        param_1[4] = uVar3;
        param_1[5] = uVar4;
        FUN_00db4764(&local_50);
        return;
      }
      FUN_009775f4();
    }
    else {
      FUN_009775ac();
    }
  }
  else {
    FUN_00977564();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x9774c8);
  (*pcVar1)();
}

